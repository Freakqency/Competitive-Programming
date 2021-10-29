#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int x, y, z; cin >> x >> y >> z;
        int needed = y - x;
        cout << (z * 2 >= needed ? "YES" : "NO") << '\n';
    }
    return 0;
}
