#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int one = 8, two = 4, three = 2, four = 6;
    if (n == 0) cout << 1 << '\n';
    else if (n % 4 == 0) cout << four << '\n';
    else if (n % 4 == 1) cout << one << '\n';
    else if (n % 4 == 2) cout << two << '\n';
    else if (n % 4 == 3) cout << three << '\n';
    return 0;
}
