#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int r1, r2, c1, c2, d1, d2; cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int w = -1, x = -1, y = -1, z = -1;
    bool flag = false;
    for (int i = 1; i <= 9; i++) {
        w = i, x = r1 - w;
        z = c2 - x, y = r2 - z;
        if (w != x && w != y && w != z && x != y && x != z && y != z 
                && w >= 1 && w <= 9 && x >= 1 && x <= 9 && y >= 1 && y <= 9
                && z >= 1 && z <= 9 && w + x == r1 && w + z == d1 
                && w + y == c1 && x + y == d2 && x + z == c2 && y + z == r2) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << w << ' ' << x << '\n';
        cout << y << ' ' << z << '\n';
    } else cout << -1 << '\n';
    return 0;
}
