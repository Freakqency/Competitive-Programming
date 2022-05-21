#include <bits/stdc++.h>

using namespace std;

// R :1
// T: 0
// C: 2

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int p, q; cin >> p >> q;
        if ((q - p) >= 2)  cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
