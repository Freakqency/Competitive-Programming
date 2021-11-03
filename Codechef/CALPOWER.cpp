#include <bits/stdc++.h>

using namespace std;

int solve(string str) {
    sort(str.begin(), str.end());
    int cnt = 0;
    for (int i = 0; i < (int) str.size(); i++)
        cnt += (str[i] - 'a' + 1) * (i + 1);
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t; 
    while (t--) {
        string str; cin >> str;
        cout << solve(str) << '\n';
    }
    return 0;
}
