#include <bits/stdc++.h>

using namespace std;

int solve(int n, int s) {
    int target = 0, res = -1;
    for (int i = 1; i <= n; i++) {
        target += i;
        if (target > s) break;
    }
    for (int i = 1; i <= n; i++) {
        if (target - i == s) {
            res = i;
            break;
        }
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
