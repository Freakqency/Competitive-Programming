#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(ll n, ll m, ll a, ll d) {
    vector<ll> nums{a, (a + d), (a + (2 * d)), (a + (3 * d)), (a + (4 * d))};
    ll subsets = (1 << 5) - 1;
    ll ans = 0;
    for (ll i = 1; i <= subsets; i++) {
        ll denom = 1ll;
        ll setbits = __builtin_popcount(i);
        for (ll j = 0; j <= 4; j++) {
            if (i & (1 << j)) denom = denom * nums[j];
        }
        if (setbits % 2 == 0) ans += n / denom;
        else ans -= n / denom;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin >> t;
    while (t--) {
        ll n, m, a, d; cin >> n >> m >> a >> d;
        solve(n, m, a, d);
    }
    return 0;
}
