#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int res = 0;
    if (n == 1) res = 1;
    if (n % 2 == 0) res = 1;
    else res = 2;
    cout << res << '\n';
    return 0;
}
