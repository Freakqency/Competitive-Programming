#include <bits/stdc++.h>

using namespace std;


// Upsolved solution
void upsolve() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, k, a; cin >> n >> k >> a;
    int ans = (a + k - 1) % n;
    if (ans == 0)  ans = n;
    cout << ans << '\n';
}

// Contest solution
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, k, a; cin >> n >> k >> a;
    a--;
    for (int i = 0; i < k; i++) {
        if (a >= n) a %= n;
        a++;
    }
    cout << a << '\n';
    return 0;
}

