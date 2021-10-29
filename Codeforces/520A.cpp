#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int n; cin >> n;
	string str, res = "YES"; cin >> str;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	vector<int> arr(26, 0);
	for (int i = 0; i < n; i++) arr[str[i] - 'a']++;
	for (int i = 0; i < 26; i++) {
		if (arr[i] == 0) {
			res = "NO";
			break;
		}
	}
	cout << res << '\n';
	return 0;
}