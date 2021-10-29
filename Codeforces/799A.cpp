#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, t, k, d; cin >> n >> t >> k >> d;
    int curt = 0;
    while (curt <= d) {
        n -= k;
        curt += t;
    }
    if (n > 0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
