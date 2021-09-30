#include<bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t; cin >> t;
  while (t--) {
  	string str; cin >> str;
  	int a = 0, b = 0, c = 0, n = str.size();
  	for (int i = 0; i < n; i++) {
  		if (str[i] == 'A') a++;
  		else if (str[i] == 'B') b++;
  		else if (str[i] == 'C') c++;
  	}
  	cout << ((a + c == b) ? "YES" :  "NO") << '\n';
  }
  return 0;
}