#include<bits/stdc++.h>

using namespace std;

int solve(int h, int p) {
    while(true) {
        h -= p;
        p /= 2;
        if (h <= 0) return 1;
        if (p <= 0) return 0;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int h, p; cin >> h >> p;
        cout << solve(h, p) << endl;
    }
}
