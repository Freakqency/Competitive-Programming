#include <bits/stdc++.h>

using namespace std;

#define ll long long

string solve(ll k) {
    const char *vals[4] = {"192", "442", "692", "942"};
    string result = "";
    if (k == 1 || k == 2 || k == 3 || k == 4) return vals[k-1];
    if (k % 4 != 0) {
        ll div_val = k / 4;
        ll mod_val = k % 4;
        result += to_string(div_val);
        result += vals[mod_val - 1];
    } else {
        ll div_val = k / 4;
        result += to_string(div_val - 1);
        result += vals[3];
    }
    return result;
    cout << "Hello World" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        ll k; cin >> k;
        cout << solve(k) << '\n';
    }
    return 0;
}
