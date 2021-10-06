#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll n) {
    unordered_map<ll, ll> mp;
    for (ll i = 1; i <= n; i++) {
        string bin = bitset<32>(i).to_string();
        for (ll j = 0; j < 32; j++) {
            if (bin[j] == '1') {
                mp[j]++;
                break;
            }
        }
    }
    ll max_len = 1;
    for (auto i : mp) {
        if (i.second > max_len) max_len = i.second;
    }
    return max_len;
}


int main() {
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        cout << solve(n) << '\n';
    }
}

