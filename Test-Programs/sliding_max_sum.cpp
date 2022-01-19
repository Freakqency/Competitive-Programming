#include<bits/stdc++.h>

using namespace std;

void solve_mine(vector<int>& arr, int n, int k) {
    int max_value = INT_MIN;
    for (int i = 0; i <= n - k; i++) {
        int curr = 0;
        for (int j = 0; j < k; j++) curr += arr[i + j];
        max_value = max(max_value, curr);
    }
    cout << max_value << '\n';
}

void solve_new(vector<int>& arr, int n, int k) {
    int max_value = INT_MIN, curr = 0;
    for (int i = 0; i < n; i++) {
        curr += arr[i];
        if (i >= k - 1) {
            max_value = max(max_value, curr);
            curr -= arr[i - (k - 1)];
        }
    }
    cout << max_value << '\n';
}

int main() {
    vector<int> arr{4, 2, 1, 7, 8, 1, 2, 8, 1, 0};
    int n = static_cast<int>(arr.size()), k = 3;
    /* solve_mine(arr, n, k); */
    solve_new(arr, n, k);
    return 0;
}
