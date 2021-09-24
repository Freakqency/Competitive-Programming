#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int t; cin >> t;
	while (t--) {
		int n = 7, sunny = 0, rainy = 0;
		vector<int> arr(n, 0);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] == 1) sunny++;
			else rainy++;
		}
		cout << ((sunny > rainy) ? "YES" : "NO" ) << '\n';
	}

	return 0;
}