#include <bits/stdc++.h>

using namespace std;

string solve(int x) {
    int dir = x % 4;
    string res;
    if (x % 4 == 0)  res = "North";
    else if (x % 4 == 2) res = "South";
    else if (x % 4 == 3) res = "West";
    else if (x % 4 == 1) res = "East";
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        cout << solve(x) << '\n';
    }
    return 0;
}
