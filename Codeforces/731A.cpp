#include <bits/stdc++.h>

using namespace std;

int solve(string str) {
    int n = str.size(), cnt = 0;
    int first = int('a');
    int second = int(str[0]);
    int diff = abs(first - second);
    cnt += min(diff, 26 - diff);
    for (int i = 1; i < n; i++) {
        first = int(str[i - 1]);
        second = int(str[i]);
        diff = abs(first - second);
        cnt += min(diff, 26 - diff);
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string str; cin >> str;
    cout << solve(str) << '\n';
    return 0;
}
