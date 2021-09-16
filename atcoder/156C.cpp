#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> arr) {
    int max_val = *max_element(arr.begin(), arr.end());
    int min_val = *min_element(arr.begin(), arr.end());
    int res = INT_MAX;
    for (int i = min_val; i <= max_val; i++) {
        int cost = 0;
        for (int j = 0; j < n; j++) {
            int dist = pow((arr[j] - i), 2);
            cost += dist;
        }
        res = min(res, cost);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(n, arr) << endl;
    return 0;
}
