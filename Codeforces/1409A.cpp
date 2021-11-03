#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        ll diff = abs(a - b);
        ll steps = diff / 10;
        if (diff % 10 != 0) steps++;
        cout << steps << '\n';
    }
    return 0;
}
