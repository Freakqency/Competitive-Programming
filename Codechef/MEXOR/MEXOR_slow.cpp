#include <bits/stdc++.h>

using namespace std;

int solve(int x) {
    if (x == 0) return 1;
    int or_val = 0, i;
    for (i = 0; i <= x; i++) {
        if ((or_val | i) > x) break;
        or_val|= i;
    }
    return i;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        cout << solve(x) << '\n';
    }
}
