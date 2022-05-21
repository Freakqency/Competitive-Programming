#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int min_diff = INT_MAX;
    if (k == 1) return 0;
    if (n == k) return arr[n - 1] - arr[0];
    for (int i = 0; i < n - k; i++) {
        int curr = arr[i + k] - arr[i];
        min_diff = min(curr, min_diff);
    }
    return min_diff;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(n, k, arr) << '\n';
    }
    return 0;
}
