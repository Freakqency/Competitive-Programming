#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int x, y, a, b, k; cin >> x >> y >> a >> b >> k;
        for (int i = 0; i < k; i++) {
            x += a;
            y += b;
        }
        if (x > y) cout << "DIESEL\n";
        else if (y > x) cout << "PETROL\n";
        else if (x == y) cout << "SAME PRICE\n";
    }
    return 0;
}
