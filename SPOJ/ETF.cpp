#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)  n /= i;
            result *= (1.0 - (1.0 / (float)i));
        }
    }
    if (n > 1) result *= (1.0 - (1.0 / (float)n));
    return result;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << solve(n) << '\n';
    }
    return 0;
}
