#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string solve(ll n) {
    return (ceil((double) sqrt(n)) == floor((double) sqrt(n))) ? "yes" : "no";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    while (true) {
        ll n; cin >> n;
        if (n == 0) break;
        cout << solve(n) << '\n';
    }
    return 0;
}
