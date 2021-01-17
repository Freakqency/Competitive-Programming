#include <bits/stdc++.h>

using namespace std;

int solve(int n, int arr[], int k) {
    if (k == 1) return 0;
    sort (arr, arr+n);
    int res = 100000;
    for (int i = 0; i < n-k+1; i++) res = min(res, arr[i+k-1]-arr[i]);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(n,arr,k) << endl;
    }
    return 0;
}
