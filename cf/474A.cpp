#include <bits/stdc++.h>

using namespace std;

string solve(char d, string str) {
	string keys = "qwertyuiopasdfghjkl;zxcvbnm,./", res = "";
	int n = keys.size();
	for (int i = 0; i < n; i++) {
		if (d == 'R') {
			int idx = keys.find(str[i]) + 1;
			if (idx == n + 1) idx = 0;
		}
		else if (d == 'L') {
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	char d; cin >> d;
	string str; cin >> str;
	cout << solve(d, str) << '\n';
	return 0;
}