#include<bits/stdc++.h>

using namespace std;

string solve(int n, vector<vector<char>> arr) {
	char to_compare = arr[0][0], other;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (i != j && (i + j) != (n - 1)) {
				other = arr[i][j];
				break;
			}
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (i == j && to_compare != arr[i][j]) return "NO";
			if (i + j == n - 1 && to_compare != arr[i][j]) return "NO";
			if (i != j && (i + j) != (n - 1) && arr[i][j] != other) return "NO";
		}
	return "YES";
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
