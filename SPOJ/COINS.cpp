#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll compute(ll n, map<ll, ll>& memo){
    if (n == 0) return 0;
    ll r = memo[n];
    if (r == 0){
        r = max(n, compute(n / 2, memo) + compute(n / 3, memo) + compute(n / 4, memo));
        memo[n] = r;
    }
    return r;
}

int main(){
    int n;
    while (cin >> n){
        map<ll, ll> memo;
        memo.clear();
        cout << compute(n, memo) << endl;
    }
}
