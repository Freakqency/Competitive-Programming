#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(ll k1, ll k2, ll sum) {
   ll n = (2 * sum) / (k1 + k2);
   ll d = (k2 - k1) / (n - 5);
   ll a = k1 - (2 * d);
   cout << n << '\n';
   for (ll i = 0; i < n; i++) cout << a + (i * d) << ' ';
   cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    ll t; cin >> t;
    while (t--) {
        ll k1, k2, sum; cin >> k1 >> k2 >> sum;
        solve(k1, k2, sum);
    }
    return 0;
}
