#include <bits/stdc++.h>

using namespace std;

#define ll long long

int power(int a, int b){
    ll res = 1;
    while (b){
        if (b % 2) res = (res * a) % 10;
        a = (a * a) % 10;
        b /= 2;
    }
    return res;
}

int main(){
    int t; cin >> t;
    while (t--){
        ll a, b; cin >> a >> b;
        ll value = power(a, b);
        cout << value << endl;
    }
    return 0;
}
