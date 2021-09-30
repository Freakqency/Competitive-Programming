#include<bits/stdc++.h>

using namespace std;

string solve(int n, vector<string> arr) {
	map<string, int> mp;
	string res;
	int max_val = 0;
	for (int i = 0; i < n; i++) mp[arr[i]]++;
	for (auto i : mp) {
		if (i.second > max_val) {
			max_val = i.second;
			res = i.first;
		}
	}
	return res;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; cin >> n;
  vector<string> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  cout << solve(n, arr) << '\n';
  return 0;
}