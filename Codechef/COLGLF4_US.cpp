#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll items, ll eggs, ll chocolates, ll cost_omelettes, ll cost_shakes, ll cost_cakes) {    
    ll ans = 1e18;
    for (int cakes = 0; cakes <= items; cakes++) {
        if (eggs < cakes || chocolates < cakes) break;
        ll omlettes = (eggs - cakes) / 2;
        ll shakes = (chocolates - cakes) / 3;
        if (cakes + omlettes + shakes < items) continue;
        ll required_omelettes, required_shakes;
        if (cost_omelettes < cost_shakes) {
            required_omelettes = min(items - cakes, omlettes);
            required_shakes = items - cakes - required_omelettes;
        } else {
            required_shakes = min(items - cakes, shakes);
            required_omelettes = items - cakes - required_shakes;
        }
        ll price = cakes * cost_cakes + required_omelettes * cost_omelettes + required_shakes * cost_shakes;
        ans = min(ans, price);
    }
    return (ans != 1e18) ? ans : -1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    ll t; cin >> t;
    while (t--) {
        ll n, e, h, a, b, c; cin >> n >> e >> h >> a >> b >> c;
        cout << solve(n, e, h, a, b, c) << endl;
    }
    return 0;
}
