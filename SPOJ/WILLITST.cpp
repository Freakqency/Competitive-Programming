#include <bits/stdc++.h>

using namespace std;

#define ll long long

int countSetBits(ll n) {
    if (n == 0)
        return 0;
    else 
        return 1 + countSetBits(n & (n - 1));
}

string solve(ll n) {
    if (countSetBits(n) == 1)
        return "TAK";
    return "NIE";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    ll n; cin >> n;
    cout << solve(n) << '\n';
    return 0;
}
