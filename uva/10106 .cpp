#include <bits/stdc++.h>

using namespace std;

string solve(string str1, string str2) {
	int n = str1.size(), m = str2.size();
	string prod(n + m, 0);
	for (int i = n - 1; i >= 0; i--) {
		for (int j = m - 1; j >= 0; j--) {
			int sum = (str2[j] - '0') * (str1[i] - '0') + prod[i + j + 1];
			prod[i + j + 1] = sum % 10;
			prod[i + j] = sum / 10;
		}
	}
	for (int i = 0; i <(int) prod.size(); i++) prod[i] += '0';
	if (prod[0] == '0') return prod.substr(1);
	return prod;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	string str1, str2;
	while (cin >> str1 >> str2) cout << solve(str1, str2) << '\n';
	return 0;
}