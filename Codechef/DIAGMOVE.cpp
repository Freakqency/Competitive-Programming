#include<bits/stdc++.h>

using namespace std;

string solve(int x2, int y2) {
    int x1 = 0, y1 = 0;
    return ((x1 == x2 && y1 == y2) ? "YES" : "NO" );
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        cout << solve(x, y) << '\n';
    }
    return 0;
}
