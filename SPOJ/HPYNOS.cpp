#include <bits/stdc++.h>

using namespace std;

#define ll long long

int solve(string n) {
    ll current = 0, count = 1;    
    vector<ll> spl_vals{4, 16, 37, 58, 89, 145, 42, 20};
    for (int i = 0; i < (int) spl_vals.size(); i++)
        if (stoll(n) == spl_vals[i]) return -1;
    for (int i = 0; i <(int) n.length(); i++) current += pow(n[i] - '0', 2);
    while (current != 1) {
        ll sum;
        for (sum = 0; current > 0; sum  += pow(current % 10, 2), current /= 10);
        for (int i = 0; i < (int) spl_vals.size(); i++) 
            if (sum == spl_vals[i]) return -1;
        count++;
        if (sum == 1) return count;
        current = sum;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string n; cin >> n;
    cout << solve(n) << '\n';
    return 0;
}
