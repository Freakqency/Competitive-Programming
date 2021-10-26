#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll n, vector<ll> arr, string str) {
    ll res = -1;
    if (str.find('R') == string::npos) return -1;
    if (str.find('L') == string::npos) return -1;
    ll R = str.find('R');
    ll L = str.find('L');
    ll val = (arr[L] - arr[R]) / 2;
    if (L > R && val >= 0) res = val;
    return res;
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n; cin >> n;
    string str; cin >> str;
    vector<ll> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(n, arr, str) << '\n';
    return 0;
}
