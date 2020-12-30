#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll n, ll k, ll d) {
    n = abs(n);
    ll ans = 0;
    if (n / d < k) {
        ll rest_moves = k - (n / d);
        if (rest_moves % 2 == 0) {
            ans = n % d;
        }
        else {
            ans = d - n % d;
        }
    }
    else {
        ans = n - d * k;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, k, d;
    scanf("%lld %lld %lld", &x, &k, &d);
    printf("%lld\n", solve(x, k, d));
    return 0;
}
