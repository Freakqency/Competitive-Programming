#include <bits/stdc++.h>

using namespace std;

string solve(float k1, float k2, float k3, float v) {
    float x = k1 * k2 * k3 * v;
    float sp = 100 / x;
    float rounded = floor((sp * 100) + .5) / 100;
    int to_compare = rounded * 100;
    return (to_compare < 958) ? "YES" : "NO";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        float k1, k2, k3, v; cin >> k1 >> k2 >> k3 >> v;
        cout << solve(k1, k2, k3, v) << endl;
    }
    return 0;
}
