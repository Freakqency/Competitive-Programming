#include <bits/stdc++.h>

using namespace std;
using lld = long double;

int main() {
    lld n, m, a; cin >> n >> m >> a;
    cout << ceil(n / a) * ceil(m / a) << '\n';
    return 0;
}
