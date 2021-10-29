#include <bits/stdc++.h>

using namespace std;

#define ll long long

string solve(vector<ll> arr, ll n) {
    ll sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i] % n;
    return (sum % n != 0) ? "NO" : "YES";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> arr(n, 0);
        for (ll i = 0; i < n; i++) cin >> arr[i];
        cout << solve(arr, n) << endl;
    }
    return 0;
}
