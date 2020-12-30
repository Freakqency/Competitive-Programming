#include <bits/stdc++.h>

using namespace std;

int solve(string str) {
    int r = 0, res = 0;
    for (int i = 0; i < (int) str.length(); i++) {
        if (str[i] == 'R')
            r++;
        else 
            r = 0;
        res = max(res, r);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str; cin >> str;
    printf("%d\n", solve(str));
    return 0;
}
