#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(ll a, ll b) {
    if (a == b)
        return 0;
    ll c = abs(b - a);
    ll res = c / 10;
    if (res % 10 != 0)
        res++;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    ll t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        cout << solve(a, b) << '\n';
    }
    return 0;
}
