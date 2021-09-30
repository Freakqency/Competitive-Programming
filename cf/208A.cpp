#include<bits/stdc++.h>

using namespace std;

string solve(string str) {
	int n = str.size();
	for (int i = 0; i < n; i++) {
      if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
        str[i] = ' ';
        str[i + 1] = ' ';
        str[i + 2] = ' ';
      }
	}
    stringstream ss(str);
    string res = "";
    do {
      string tmp;
      ss >> tmp;
      res += tmp;
      res += ' ';
    }
    while (ss);
    return res;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  string str; cin >> str;
  cout << solve(str) << '\n';
  return 0;
}
