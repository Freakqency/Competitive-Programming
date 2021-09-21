#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> arr) {
  map<int, int> mp;
  int res = -1;

  for (int i = 0; i < 4; i++) mp[arr[i]]++;

  if (mp.size() == 1)
    return 0;
  else if (mp.size() == 4)
    return 2;
  else if (mp.size() == 3)
    return 2;
  else if (mp.size() == 2) {
    for (auto i : mp)
      if (i.second == 3) res = 1;
    if (res == -1) res = 2;
  }

  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    vector<int> arr(4, 0);
    for (int i = 0; i < 4; i++) cin >> arr[i];

    cout << solve(arr) << endl;
  }

  return 0;
}
