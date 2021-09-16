#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
    int outlet = 1, res = 0;
    while (outlet < b) {
        outlet--;
        outlet += a;
        res++;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int a, b; cin >> a >> b;
    cout << solve(a, b) << endl;
    return 0;
}
