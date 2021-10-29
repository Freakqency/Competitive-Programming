#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ll l, r; cin >> l >> r;
    bool flag = false;
    for (ll i = l; i <= r; i++) {
        if (i + 1 <= r && i + 2 <= r) {
            if (__gcd(i, i + 1) == 1 && __gcd(i + 1, i + 2) == 1 
                    && __gcd(i, i + 2) != 1) {
                cout << i << ' ' << i + 1 << ' ' << i + 2 << '\n';
                flag = true;
                break;
            }
        }
    }
    if (!flag) cout << -1 << '\n';
    return 0;
}
