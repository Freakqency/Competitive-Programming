#include<bits/stdc++.h>

using namespace std;

string solve(int n, vector<vector<char>> arr) {
    set<char> s1, s2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == n - 1 - i) s1.insert(arr[i][j]);
            else s2.insert(arr[i][j]);
        }
    }
    return (s1 != s2 && s1.size() == 1 && s2.size() == 1) ? "YES" : "NO";
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int n; cin >> n;
	vector<vector<char>> arr(n, vector<char>(n));
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) cin >> arr[i][j];
	cout << solve(n, arr) << '\n';
	return 0;
}
