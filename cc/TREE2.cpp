#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(ll arr[], ll n) {
    map<ll, ll> mp;
    ll count = 0;
    for (ll i = 0; i < n; i++) {
        mp[arr[i]]++;
        if (mp[arr[i]] == 1 && arr[i] != 0)
            count++;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        cout << solve(arr, n) << '\n';
    }
    return 0;
}

