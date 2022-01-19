#include <bits/stdc++.h>

using namespace std;

void solve_kandane(int n, vector<int> arr, int k) {
    for (int i = 0; i <= n - k; i++) {
        int curr = INT_MIN;
        for (int j = 0; j < k; j++) curr = max(curr, arr[i + j]);
        cout << curr << ' ';
    }
    cout << '\n';
}

void solve_brute(int n, vector<int> arr, int k) {
    for (int i = 0; i <= n - k; i++) {
        int max_value = *max_element(arr.begin() + i, arr.begin() + i + k);
        cout << max_value << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int k; cin >> k;
    solve_brute(n, arr, k);
    return 0;
}
