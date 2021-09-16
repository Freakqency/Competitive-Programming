#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> arr) {
	int n_odd = 0, n_eve = 0, arr_odd = 0, arr_eve = 0, res = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) arr_eve++;
		else arr_odd++;
	}
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) n_eve++;
		else n_odd++;
	}
	res += min(n_odd, arr_eve);
	res += min(n_eve, arr_odd);
	return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> arr(n,0);
		for (int i = 0; i < n; i++) cin >> arr[i];
		cout << solve(n, arr) << '\n';
	}
    return 0;
}
