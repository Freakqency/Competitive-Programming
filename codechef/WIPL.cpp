#include <bits/stdc++.h>

using namespace std;

bool check_array_zero(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) return false;
    }
    return true;
}

int binary_search(int search_val, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == search_val) return mid;
        if (search_val > arr[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

vector<vector<int>> find_perfect_combinations(vector<int> arr, int n, int k) {
}

vector<vector<int>> find_higher_combinations(vector<int> arr, int n, int k) {
}

int solve(int n, int k, vector<int> arr) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<vector<int>> m_combinations = find_perfect_combinations(arr, n, k);
    if (m_combinations[0][0] == -1) m_combinations = find_higher_combinations(arr, n, k);
    if (m_combinations[0][0] == -1) return -1;
    for (int i = 0; i < (int) m_combinations[0].size(); i++) {
        int idx = binary_search(m_combinations[0][i], arr);
        arr[idx] = 0;
    }
    if (check_array_zero) return -1;
    vector<vector<int>> t_combinations = find_perfect_combinations(arr, n, k);
    if (t_combinations[0][0] == -1) t_combinations = find_higher_combinations(arr, n, k);
    if (t_combinations[0][0] == -1) return -1;
    int result = t_combinations[0].size() + m_combinations[0].size();
    return result;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(n, k, arr) << '\n';
    }
    return 0;
}
