#include<bits/stdc++.h>

using namespace std;

string solve(int a, int b, int c, int d, int e) {
	if ((a + b) <= d && c <= e)  return "YES";
	else if (( b + c) <= d && a <= e) return "YES";
	else if ((a + c) <= d && b <= e) return "YES";
	return "NO";
}


int main() {
	int t; cin >> t;
	while (t--) {
		int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
		cout << solve (a, b, c, d, e) << endl;
	}
	return 0;
}