#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> arr) {
	int cnt = 0;
	sort(arr.begin(), arr.end());
	for (int i = 1; i < n - 1; i++) {
		if (arr[i] > arr[0] && arr[i] < arr[n - 1]) cnt++;
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int n; cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << solve(n, arr) << '\n';
	return 0;
}