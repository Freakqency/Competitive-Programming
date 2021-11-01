#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        ll odd_range;
        if (n % 2 == 0)  odd_range = n / 2;
        else odd_range = n / 2 + 1;
        if (k >= 1 && k <= odd_range) cout << (k * 2 - 1) << '\n';
        else if (k > odd_range && k <= n) cout << ((k - odd_range) * 2) << '\n';
    }
    return 0;
}
