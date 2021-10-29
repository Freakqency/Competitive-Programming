#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll getDigitSum(ll n) {
    ll res = 0;
    while(n != 0) {
        ll temp = n % 10;        
        res += temp;
        n /= 10;
    }
    return res;
}

string solve(ll n) {
    ll sumVal = getDigitSum(n);
    if (sumVal % 9 == 0)
        return "Yes";
    return "No";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    if (scanf("%lld", &n) == 1) {
        printf("%s", solve(n).c_str());
    }
    return 0;
}
