#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> arr) {
	int tot = accumulate(arr.begin(), arr.end(), 0), sum = 0, cnt = 0;
	sort(arr.begin(), arr.end(), greater<int>());
	for (int i = 0; i < n; i++) {
		if (sum > tot) break;
		sum += arr[i];
		cnt++;
		tot -= arr[i];
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