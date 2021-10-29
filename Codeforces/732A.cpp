#include <bits/stdc++.h>

using namespace std;

int solve(int k, int r) {
    int i  = 1;
    while (true) {
        if ((k  * i) % 10 == 0 || (k * i) % 10 - r == 0) return i;
        i++;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k, r; cin >> k >> r;
    cout << solve(k, r)  << '\n';
    return 0;
}
