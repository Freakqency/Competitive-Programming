#include <bits/stdc++.h>

using namespace std;

int solve(int l, int b) {
    int res = 0;
    while (l <= b) {
        l *= 3;
        b *= 2;
        res++;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int l, b; cin >> l >> b;
    cout << solve(l, b) << '\n';
    return 0;
}
