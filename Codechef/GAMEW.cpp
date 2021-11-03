#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string str; cin >> str;
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (i != n - 1 && str[i] != str[i + 1]) cnt++;
        cnt++;
        cout << (cnt % 2 == 0 ? "RAMADHIR\n" : "SAHID\n");
    }
    return 0;
}
