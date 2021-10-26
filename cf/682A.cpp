#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll solve(ll n, ll m) {
    ll l = min (n, m);
    ll z = max(n, m);
    ll k = ceil((n + m) / 5) * 5;
    ll cnt = 0;
    for (ll i = 1; i <= l; i++) {
        for (int j = 5; j <= k; j += 5) {
            ll test = j - i;
            if (test <= z) {
                if (test >= 1) cnt++;
            }
            else break;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, m; cin >> n >> m;
    cout << solve(n, m) << '\n';
    return 0;
}
