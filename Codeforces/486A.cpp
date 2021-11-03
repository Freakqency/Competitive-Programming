#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n; cin >> n;
    cout << ((n & 1) ? "-" : "" ) << (n + 1) / 2 << '\n';
    return 0;
}
