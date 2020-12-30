#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool check(ll r, ll g, ll b, ll w) {
    if (r%2 + g%2 + b%2 + w%2 > 1)
        return false;
    return true;
}

string solve(ll r, ll g, ll b, ll w) {
    if (check(r, g, b, w))
        return "Yes";
    else if (r > 0 && g > 0 && b > 0 && check(r-1, g-1, b-1, w+1))
        return "Yes";
    return "No";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        cout << solve(r, g, b, w) << endl;
    }
}
