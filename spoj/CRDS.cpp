#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll n) {
    ll result = n * 2;
    ll sum = n * (n - 1) / 2;
    result += sum * 3;
    return result % 1000007;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        cout << solve(n) << '\n';
    }
    return 0;
}
