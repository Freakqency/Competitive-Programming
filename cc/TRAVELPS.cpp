#include<bits/stdc++.h>

using namespace std;

int solve(int n, int a, int b, string c) {
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (c[i] == '0')  res += a;
		else if (c[i] == '1') res += b;
	}
	return res;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, a, b; cin >> n >> a >> b;
		string s; cin >> s;
		cout << solve(n, a, b, s) << endl;
	}
	return 0;
}