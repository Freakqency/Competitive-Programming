#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int s, t, x; cin >> s >> t >> x;
    bool flag = false;
    if (x == 0) x = 24;
    if (t == 0) t = 24;
    if (s == 0) s = 24;
    if (t <= s) t += 24;
    x++;
    if (x >= s && x <= t) flag = true;
    cout << ((flag) ? "Yes\n" : "No\n");
    return 0;
}
