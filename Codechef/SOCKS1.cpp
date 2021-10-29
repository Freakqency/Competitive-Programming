#include <bits/stdc++.h>

using namespace std;

string solve(int a, int b, int c) {
    if (a == b || a == c) return "YES";
    else if (b == c || b == a) return "YES";
    else if (c == a || c == b) return "YES";
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int a, b, c; cin >> a >> b >> c;
    cout << solve(a, b, c) << endl;
    return 0;
}
