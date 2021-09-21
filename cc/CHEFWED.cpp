#include <bits/stdc++.h>

using namespace std;

int solve(int arr[], int n, int k) {
    int dp[n+1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i-1] + k;
        map<int, int> mp;
        int clash = 0;
        for (int j = i; j >= 1; j--){
            mp[arr[j]]++;
            if (mp[arr[j]] == 2)
                clash += 2;
            else if (mp[arr[j]] > 2)
                clash += 1;
            dp[i] = min(dp[i], dp[j-1] + k + clash);
        }
    }
    for (int i = 0; i < n+1; i++)
        cout << dp[i] << " ";
    return dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int arr[n+1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        cout << solve(arr, n, k) << '\n';
    }
    return 0;
}
