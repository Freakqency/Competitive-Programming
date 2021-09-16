#include <bits/stdc++.h>

using namespace std;

int solve(int p, int v, int t) {
    int res = 0;
    if (p == 1) res++;
    if (v == 1) res++;
    if (t == 1) res++;
    if (res >= 2) return 1;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int res = 0;
    int n; cin >> n;
    while (n--) {
        int p, v, t; cin >> p >> v >> t;
        res += solve(p, v, t);
    }
    cout << res << endl;
    return 0;
}
