#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        ll x, y; cin >> x >> y;
        if (x == 0) {
            if (y % 2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            if ((x + (2 * y)) % 2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
