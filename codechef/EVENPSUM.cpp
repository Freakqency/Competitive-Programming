#include <bits/stdc++.h>

using namespace std;

#define ll long long 

ll solve(ll a, ll b) {
    ll a_odd = (a + 1) / 2, a_even = a / 2;
    ll b_odd = (b + 1) / 2, b_even = b / 2;
    ll res = a_odd * b_odd + a_even * b_even;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        cout << solve(a, b) << '\n';
    }
    return 0;
}
