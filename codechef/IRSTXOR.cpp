#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll get_power(ll n) {
    ll flag = 0;
    if (n && (!(n&(n-1)))) flag = 1;
    ll num = ceil(log2(n));
    return (flag) ? 1 << (num+1) : 1 << num;
}

ll solve(ll c) {
    ll d = get_power(c), prod;
    string binary = bitset<32>(c).to_string();
    int start_idx = binary.find_first_of('1');
    for (int i = start_idx+1; i < (int) binary.length(); i++) {
        if (binary[i] == '1') binary[i] = '0';
        else if(binary[i] == '0') binary[i] = '1';
    }
    ll n1 = stoull(binary, 0, 2);
    if (n1 < d) {
        ll n2 = n1 ^ c;
        prod = n2 * n1;
    }
    return prod;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    ll t; cin >> t;
    while (t--) {
        ll c; cin >> c;
        cout << solve(c) << endl;
    }
    return 0;
}
