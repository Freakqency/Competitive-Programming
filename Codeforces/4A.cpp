#include <bits/stdc++.h>

using namespace std;

string solve(int n) {
    if (n % 2 == 0 && n > 2) return "YES";
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    cout << solve(n) << endl;
    return 0;
}
