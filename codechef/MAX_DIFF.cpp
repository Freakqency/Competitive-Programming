#include <bits/stdc++.h>

using namespace std;

int solve(int n, int s) {
    int res = 0;
    for (int i = 0; i <= n; i++) {
        int target = (s - i);
        if (target >= 0 && target <= n) res = max(res, abs(i - target));
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n, s; cin >> n >> s;
        cout << solve(n, s) << '\n';
    }
    return 0;
}
