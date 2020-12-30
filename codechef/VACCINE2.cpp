#include <bits/stdc++.h>

using namespace std;

int solve(int n, int d, int arr[]) {
    int res = 0;
    if (d == 1)
        return n;
    vector<int> risk; vector<int> normal;
    for (int i = 0; i < n; i++)
        if (arr[i] <= 9 || arr[i] >= 80)
            risk.push_back(arr[i]);
        else
            normal.push_back(arr[i]);
    res += (risk.size() / d)  + ((risk.size() % d) != 0);
    res += (normal.size() / d) + ((normal.size() % d) != 0);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n, d; cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << solve(n, d, arr) << endl;
    }
    return 0;
}
