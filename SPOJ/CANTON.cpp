#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
    int i = 1, j = 1, k = 1;
    while (k < n) {
        j++, k++;
        if (k == n) break;
        while(j > 1 && k < n) i++, j--, k++;
        if (k == n) break;
        i++, k++;
        if (k == n) break;
        while (i > 1 && k < n) j++, i--, k++;
        if (k == n) break;
    }
    cout << "TERM " <<  n << ' ' << "IS " << i << "/" << j << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        solve(n);
    }
    return 0;
}
