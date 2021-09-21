#include <bits/stdc++.h>

using namespace std;

double solve(int amt, double bal) {
    if (amt % 5 != 0) return bal;
    else if (amt + 0.5 > bal) return bal;
    return bal - amt - 0.5;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int amt;
    double bal;
    cin >> amt >>  bal;
    printf("%.2f", solve(amt, bal));
    return 0;
}
