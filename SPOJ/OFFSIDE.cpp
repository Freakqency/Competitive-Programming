#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n = 0, m = 0;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        vector<int> a(n);
        vector<int> d(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> d[i];
        sort(a.begin(), a.end());
        sort(d.begin(), d.end());
        cout << ((a[0] < d[1]) ? 'Y' : 'N' ) << '\n';
    }
    return 0;
}
