#include <bits/stdc++.h>

using namespace std;

int solve(int n, string str) {
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (str[i] == str[i - 1]) cnt++;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    string str; cin >> str;
    cout << solve(n, str) << '\n';
    return 0;
}
