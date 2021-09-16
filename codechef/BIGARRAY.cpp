#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll n, ll s) {
    ll tot =  (n * (n + 1) ) / 2;
    ll x = tot - s;
    if (x >= 1 && x <= n) return x;
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    ll t; cin >> t;
    while (t--) {
        ll n, s; cin >> n >> s;
        cout << solve(n, s) << '\n';
    }
    return 0;
}
