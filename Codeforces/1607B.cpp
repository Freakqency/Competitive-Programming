#include <bits/stdc++.h>

using namespace std;

#define ll long long 

ll solve(ll x, ll n) {
    ll m = n / 4;
    ll d1 = -4;
    ll d2 = 4;
    ll a1 = -1, a2 = 2, a3 = 3, a4 = ;
    if (n % 4 != 0) m++;
    if (n % 2 != 0) {
        d1 = 4, d2 = -4;
        a1 = 1, a2 = -2, a3 = -3, a4 = 4;
    }
    ll sn1 = (m / 2) * ((2 * ))
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin >> t;
    while (t--) {
        ll x, n; cin >> x >> n;
        cout << solve(x, n) << '\n';
    }
    return 0;
}
