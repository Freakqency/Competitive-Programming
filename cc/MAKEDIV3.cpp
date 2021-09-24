#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		if (n == 1) cout << 3 << '\n';
		else if (n == 2) cout << 33 << '\n';
		else {
			string res(n - 2, '0');
			string o = "3";
			string l = "3";
			cout << o + res + l << '\n';
		}
	}
	return 0;
}