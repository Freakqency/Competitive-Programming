#include <bits/stdc++.h>

using namespace std;

void solve(int n, int m, int x, int y) {
    cout << x << " " << y << endl;
    for (int i = 1; i <= n; i++) 
        if (1 != x)
            cout << i << " " << y << endl;
    int dir = 0;
    for (int j = 1; j <= m; j++) {
        if (j == y)
            continue;
        if (dir == 0) {
            cout << n << " " << j << endl;
            for (int i = n-1; i >= 1; i--)
                cout << i << " " << j << endl;
            dir = 1;
        }
        else {
            cout << 1 << " " << j << endl;
            for (int i = 2; i <= n; i++)
                cout << i << " " << j << endl;
            dir = 0;
        }
    }
}

int main() {
    int n, m, sx, sy;
    cin >> n >> m >> sx >> sy;
    solve(n, m, sx, sy);
    return 0;
}
