#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int decimal_to_base(int n, int base) {
    int res = 0;
    while (n > 0) {
        res += n % base;
        n /= base;
    }
    return res;
}

int solve(int n, int l, int r) {
    int val = INT_MAX, res = 0;
    for (int i = r; i >= l; i--) {
        if (r >= n && l <= n) return i;
        else if (r > n && l > n) return l;
        int tmp = decimal_to_base(n, i);
        if (tmp <= val) {
            val = tmp;
            res = i;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int q; cin >> q;
    while (q--) {
        int n, l, r; cin >> n >> l >> r;
        cout << solve(n, l, r) << endl;
    }
    return 0;
}
