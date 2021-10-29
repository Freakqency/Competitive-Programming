#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int t; cin >> t;

  while (t--) {
    int g1, s1, b1, g2, s2, b2; cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
    int c1 = g1 + s1 + b1;
    int c2 = g2 + s2 + b2;

    if (c1 > c2) cout << 1 << endl;
    else if (c2 > c1) cout << 2 << endl;
  }

  return 0;
}
