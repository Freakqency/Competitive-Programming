#include <bits/stdc++.h>

using namespace std;

int solve(int a1, int a2, int a3, int a4, string str) {
    int n = str.size(), res = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') res += a1;
        else if (str[i] == '2') res += a2;
        else if (str[i] == '3') res += a3;
        else if (str[i] == '4') res += a4;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
    string str; cin >> str;
    cout << solve(a1, a2, a3, a4, str) << '\n';
    return 0;
}
