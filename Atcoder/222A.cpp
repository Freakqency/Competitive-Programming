#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string n; cin >> n;
    int len = n.size();
    if (len == 1) n = "000" + n;
    else if (len == 2) n = "00" + n;
    else if (len == 3) n = "0" + n;
    cout << n << '\n';
    return 0;
}
