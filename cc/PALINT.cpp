#include<bits/stdc++.h>

using namespace std;

string solve(int n, int x, vector<int> arr) {
	if (n == 1) return "1 0";
	map<int, int> mp, xmp;
	int same = 0, op = 0;
	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
		xmp[arr[i] ^ x] = mp[arr[i]];
	}
	for (auto i : mp) {
		if (i.second > same) same = i.second;
	}
	if (x == 0) return to_string(same) + ' ' + to_string(op);
	for (auto i : mp) {
		if (xmp.count(i.first)) {
			if (i.second + xmp[i.first] > same) {
				same = i.second + xmp[i.first];
				op = min(i.second, xmp[i.first]);
			}
			else if (i.second + xmp[i.first] == same) {
				if (min(i.second, xmp[i.first]) < op) op = min(i.second, xmp[i.first]);
			}
		}
	}
	return to_string(same) + ' ' + to_string(op);
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		vector<int> arr(n, 0);
		for (int i = 0; i < n; i++) cin >> arr[i];
		cout << solve(n, x, arr) << endl;
	}
	return 0;
}