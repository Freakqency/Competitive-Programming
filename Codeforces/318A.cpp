#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll n, ll k) {
    ll m = n / 2;
    if (n % 2 != 0) m = (n + 1) / 2;
    if (k > m) return (k - m) * 2;
    return (2 * k) - 1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, k; cin >> n >> k;
    cout << solve(n, k) << '\n';
    return 0;
}
