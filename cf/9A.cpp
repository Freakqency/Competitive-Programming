#include <bits/stdc++.h>

using namespace std;

string solve(int y, int w) {
    int to_match = max(y, w), num = 6 - to_match + 1, den = 6;
    if (num == 0) return "0/1";
    return to_string(num/__gcd(6, num)) + '/' + to_string(den/__gcd(6, num));
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int y, w; cin >> y >> w;
    cout << solve(y, w) << '\n';
    return 0;
}
