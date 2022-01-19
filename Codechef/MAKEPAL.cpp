#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, odd = 0; cin >> n;
        int res = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a % 2 != 0) odd++;
        }
        cout << odd / 2 << '\n';
    }
    return 0;
}
