#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll n, ll m, vector<ll> john, vector<ll> jack) {
    ll john_sum = accumulate(john.begin(), john.end(), 0);
    ll jack_sum = accumulate(jack.begin(), jack.end(), 0);
    if (john_sum > jack_sum) return 0;
    sort(john.begin(), john.end());
    sort(jack.begin(), jack.end(), greater<ll>());
    ll swaps = 0;
    for (ll i = 0; i < min(n, m); i++) {
        john_sum -= john[i];
        john_sum += jack[i];
        jack_sum -= jack[i];
        jack_sum += john[i];
        swaps++;
        if (john_sum > jack_sum) return swaps;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    ll t; cin >> t;
    while (t--) {
        ll n, m; cin >> n >> m;
        vector<ll> john(n, 0);
        vector<ll> jack(m, 0);
        for (ll i = 0; i < n; i++) cin >> john[i];
        for (ll i = 0; i < m; i++) cin >> jack[i];
        cout << solve(n, m, john, jack) << '\n';
    }
    return 0;
}
