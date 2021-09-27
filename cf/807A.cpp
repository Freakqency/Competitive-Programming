#include <bits/stdc++.h>

using namespace std;

string solve(int n, vector<pair<int, int>> arr) {
	vector<pair<int, int>> cp = arr;
	for (int i = 0; i < n; i++)
		if (arr[i].first != arr[i].second) return "rated";
	sort(arr.rbegin(), arr.rend());
	if (cp == arr) return "maybe";
	return "unrated";
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int n; cin >> n;
	vector<pair<int, int>> arr;
	for (int i = 0; i < n; ++i) {
		int n1, n2; cin >> n1 >> n2;
		pair<int, int> item = make_pair(n1, n2);
		arr.push_back(item);
	}
	cout << solve(n, arr) << '\n';
	return 0;
}