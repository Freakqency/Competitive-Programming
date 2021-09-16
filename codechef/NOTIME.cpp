#include <bits/stdc++.h>

using namespace std;

string solve(vector<int> zones, int n, int h, int x) {
    int needed = h - x;
    for (int i = 0; i < n; i++)
        if (needed <= zones[i]) return "YES";
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n, h, x; cin >> n >> h >> x;
    vector<int> zones(n, 0);
    for (int i = 0; i < n; i++) cin >> zones[i];
    cout << solve(zones, n, h, x) << endl;
    return 0;
}
