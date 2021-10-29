#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string str; cin >> str;
    int n = str.size(), x = 0;
    string cpy = str;
    if (str[0] == '9') x = 1;
    for (int i = x; i < n; i++) {
        int m = cpy[i] - '0';
        m = 9 - m;
        cpy[i] = m + '0';
        if (cpy > str) cpy = str;
        else str = cpy;
    }
    cout << cpy << endl;
    return 0;
}
