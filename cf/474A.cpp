#include <bits/stdc++.h>

using namespace std;

string solve(char d, string str) {
	string keys = "qwertyuiopasdfghjkl;zxcvbnm,./", res = "";
	int n = keys.size();
	for (int i = 0; i < (int) str.size(); i++) {
		if (d == 'R') {
			int idx = keys.find(str[i]) - 1;
			if (idx == -1) idx = n - 1;
			res += keys[idx];
		}
		else if (d == 'L') {
			int idx = keys.find(str[i]) + 1;
			if (idx == n) idx = 0;
			res += keys[idx];
		}
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	char d; cin >> d;
	string str; cin >> str;
	cout << solve(d, str) << '\n';
	return 0;
}