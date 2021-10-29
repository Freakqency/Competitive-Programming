#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> arr, int k, int d) {
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int contest = sum / k;
    return (contest > d) ? d : contest ;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n, k, d; cin >> n >> k >> d;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(n, arr, k, d) << '\n';
    }
    return 0;
}
