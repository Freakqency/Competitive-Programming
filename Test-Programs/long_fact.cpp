#include <bits/stdc++.h>

using namespace std;

#define MAX 500000

int multiply(int res[], int x, int res_size) {    
    int carry = 0;
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while(carry) {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}

void solve(int n) {
    int res[MAX];
    res[0] = 1;
    int res_size = 1;
    for (int i = 2; i <= n; i++)
        res_size = multiply(res, i, res_size);
    for (int i = res_size-1; i >= 0; i--)
        cout << res[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
