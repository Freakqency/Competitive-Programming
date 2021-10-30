#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n - 1; i++) {
        int a1, b1; cin >> a1 >> b1;
        mp[a1]++;
        mp[b1]++;
    }
    bool flag = false;
    for (auto i : mp) {
        if (i.second == n - 1) {
            flag = true;
            break;
        }
    }
    if (flag) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
