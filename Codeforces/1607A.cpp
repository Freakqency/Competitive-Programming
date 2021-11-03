#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        string alpha, str; cin >> alpha >> str;
        int initial = alpha.find(str[0]), res = 0, n = str.size();
        if (n == 0) res = 1;
        else {
            for (int i = 1; i < n; i++) {
                int curr = alpha.find(str[i]);
                res += abs(initial - curr);
                initial = curr;
            }
        }
        cout << res << '\n';
    }
    return 0;
}
