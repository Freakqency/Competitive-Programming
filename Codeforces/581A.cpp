#include <bits/stdc++.h>

using namespace std;

// R: 1
// T: 1
// C: 4

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int r, b; cin >> r >> b;
    int min_val = min(r, b);
    int max_val = max(r, b);
    string ans = "";
    ans += to_string(min_val);
    ans += ' ';
    max_val -= min_val;
    if (max_val == 0) ans += to_string(0);
    else if (max_val % 2 == 0) ans += to_string(max_val / 2);
    else if (max_val % 2 != 0) ans += to_string((max_val - 1 )/ 2);
    cout << ans << '\n';
    return 0;
}
