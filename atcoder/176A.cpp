#include <bits/stdc++.h>

using namespace std;

int solve(int n, int x, int t) {
    int val = n - x;
    int res = 0;
    if (val <= x) {
        res = t + t;
    }
    else {
        res = (n * t)/x;
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, t;
    cin >> n >> x >> t;
    printf ("%d\n",solve(n, x, t));
    return 0;
}
