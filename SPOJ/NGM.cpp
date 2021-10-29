#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(ll n) {
    int result = n % 10;
    (result == 0) ? cout << 2 << '\n' : cout << 1 << '\n' << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    ll n; cin >> n;
    solve(n);
    return 0;
}
