#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int x = 0, y = 0, z = 0;
    for(int i = 0 ; i < n; i++) {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        x += n1;
        y += n2;
        z += n3;
    }
    if (x == 0 && y == 0 && z == 0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}
