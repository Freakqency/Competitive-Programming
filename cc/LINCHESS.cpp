#include <bits/stdc++.h>

using namespace std;

int solve(int arr[], int n, int k) {
    int val = 10e8;
    int res;
    for (int i = 0; i < n; i++) {
        if (k % arr[i] == 0) {
            if (k / arr[i] < val) {
                res = arr[i];
                val = k / arr[i];
            }
        }
    }
    if (val == 10e8)
        return -1;
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << solve(arr, n, k) << endl;
    }
}
