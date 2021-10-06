#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll highest_power_of_two(ll n) {
    ll p = (ll) log2(n);
    return  p;
}

bool is_power_of_two(ll n) {
    if (n == 0) return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

ll solve(ll n) {
    if (n == 1) return 1;
    ll hpt = highest_power_of_two(n);
    if (is_power_of_two(n)) return n - pow(2, hpt - 1);    
    ll max_len = max(n + 1 - pow(2, hpt), pow(2, hpt) - pow(2, hpt - 1));
    return max_len;
}

int main() {
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        cout << solve(n) << '\n';
    }
}
