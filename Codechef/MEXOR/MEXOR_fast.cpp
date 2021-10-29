#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool is_pow_of_two(ll n) {
    if (n == 0) return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

ll highest_power_of_two(ll n) {
    ll p = (ll) log2(n);
    return  p;
}

ll solve(ll x) {
    if (x == 0) return 1;
    ll hpt = highest_power_of_two(x);
    if (is_pow_of_two(x + 1)) return pow(2, hpt + 1);
    return pow(2, hpt);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    ll t; cin >> t;
    while (t--) {
        ll x; cin >> x;
        cout << solve(x) << '\n';
    }
}
