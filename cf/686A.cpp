#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    

    ll n, x, k = 0; cin >> n >> x;

    while (n--) {
        char c; cin >> c;
        ll d; cin >> d;
        if (c == '+') x += d;
        else if (c == '-') {
            if (d > x) k++;
            else x -= d;            
        }
    }

    cout << x << ' ' << k << '\n';

    return 0;
}
