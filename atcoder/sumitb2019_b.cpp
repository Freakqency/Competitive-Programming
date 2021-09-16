#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
    float x = n / 1.08;
    if (ceil(x) == floor(x)) cout << (int) x << endl;
    else {
        float ceil_val = ceil(x) * 1.08;
        if (floor(ceil_val) == n) cout << (int) ceil(x) << endl;
        else cout << ":(" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    solve(n);
    return 0;
}
