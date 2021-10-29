#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> arr, int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) result ^= arr[i];
    return result;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(arr, n) << '\n';
    return 0;
}
