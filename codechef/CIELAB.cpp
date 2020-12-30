#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
    int c = a - b;
    if (c % 10 == 9)
        return c-1;
    return c+1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int a, b; cin >> a >> b;
    cout << solve(a, b) << '\n';
    return 0;
}
