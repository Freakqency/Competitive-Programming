#include <bits/stdc++.h>

using namespace std;

int solve(string str1, string str2) {
	int res = 0, n = str2.size();
	if (str1.find(str2.substr(0, 1)) != 0) res++;
	for (int i = 2; i <= n; i++) {
		if (str1.find(str2.substr(0, i)) == string::npos) res++;
	}
	return (res == 0) ? -1 : res;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	string str1, str2; cin >> str1 >> str2;
	cout << solve(str1, str2) << '\n';
	return 0;
}