#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll solve(string str) {
    ll n = str.size();
    if (str == "0") return 0;
    if (count(str.begin(), str.end(), '1') == 1) return n  / 2;
    return ((n + 1) / 2);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string str; cin >> str;
    cout << solve(str) << '\n';
    return 0;
}
