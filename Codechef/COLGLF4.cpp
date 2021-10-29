#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(ll n, ll e, ll h, ll a, ll b, ll c) {
    if (n <= 0) return 0;
    ll bill = 1e15;
    if (2 * n <= e) bill = min(bill, n * a); // All Omlettes
    if (3 * n <= h) bill = min(bill, n * b); // All milkshakes
    if ((n <= h) && (n <= e)) bill = min(bill, n * c); // All cakes
    if ((e >= 3) && (h >= 4) && (n >= 3))  bill = min(bill, a + b + c + solve(n - 3, e - 3, h - 4, a, b, c)); // All Three
    if (((h - n) / 2 >= 1) && (((h - n) /2) >= n - e)) { // Shakes and Cakes 
        if (b - c < 0) {
            ll temp = min(n - 1, (h - n) / 2);
            bill = min(bill, (b - c) * temp + c * n);
        } else {
            ll v = 1;
            ll temp = max(v, n - e);
            bill = min(bill, (b - c) * temp + n * c);
        }
    }
    if ((e - n >= 1) && (e + h >= 2 * n)) { //Omlettes and Cakess
        if (a - c < 0) {
            ll temp = min(n - 1, e - n);
            bill = min(bill, (a - c) * temp + c * n);
        } else {
            ll v = 1;
            ll temp = max(v, n - h);
            bill = min(bill, (a - c) * temp + c * n);
        }
    }
    if ((e/2 >= 1) && (e/2 >= (3*n - h + 2) / 3)) { // Omlettes and Shakes
        if (a - b < 0)  {
            ll temp = min(n - 1, e / 2);
            bill = min(bill, (a - b) * temp + c * n);
        } else {
            ll v = 1;
            ll temp = max(v, (3 * n - h + 2) / 3);
            bill = min(bill, (a - b) * temp + c * n);
        }
    }
    return bill;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    ll t; cin >> t;
    while (t--) {
        ll n, e, h, a, b, c; cin >> n >> e >> h >> a >> b >> c;
        ll ans = solve(n, e, h, a, b, c);
        if (ans == 1e15) cout << -1 << endl;
        else cout << ans << '\n';
    }
    return 0;
}
