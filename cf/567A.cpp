#include <bits/stdc++.h>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int n; cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << abs(arr[1] - arr[0]) << ' ' << abs(arr[n - 1] - arr[0]) << '\n';
	for (int i = 1; i < n - 1; i++) {
		int min_val = min(abs(arr[i - 1] - arr[i]), abs(arr[i + 1] - arr[i]));
		int max_val = max(abs(arr[0] - arr[i]), abs(arr[n - 1] - arr[i]));
		cout << min_val << ' ' << max_val << '\n';
	}
	cout << abs(arr[n - 2] - arr[n - 1]) << ' ' << abs(arr[0] - arr[n - 1]) << '\n';
	return 0;
}