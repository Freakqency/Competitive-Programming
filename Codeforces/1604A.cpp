#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll n, vector<ll> arr) {
    ll count = 0;
    if (arr[0] != 1) count += arr[0] - 1;
    for (int i = 1; i < n; i++) count = max(count, arr[i] - (i + 1));
    return count;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) cin >> arr[i];
        cout << solve(n, arr) << '\n';
    }
    return 0;
}
