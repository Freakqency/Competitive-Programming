#include <bits/stdc++.h>

using namespace std;

string solve(int n, int t) {
	if (n == 1 && t == 10) return "-1";
	string res(n, '0');
	if (t == 10) res[0] = '0' + 1;
	else res[0] = '0' + t;
	return res;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, t; cin >> n >> t;
	cout << solve(n, t) << '\n';
	return 0;
}


