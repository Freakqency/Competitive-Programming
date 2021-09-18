#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    int res = 0; 
    for (int i = 0; i < n; i++) {
        int p, v, t; cin >> p >> v >> t;
        int cnt = p + v + t;
        if (cnt >= 2) res++;
    }
    cout << res << '\n';
    return 0;
}
