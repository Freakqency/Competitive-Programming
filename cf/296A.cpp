#include <bits/stdc++.h>

using namespace std;

bool check_unique(vector<int> arr, int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) return false;
    }
    return true;
}

string solve(int n, vector<int> arr) {
    if (check_unique(arr, n)) return "YES";
    while(next_permutation(arr.begin(), arr.end())) {
        if (check_unique(arr, n)) return "YES";
    }
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(n, arr) << '\n';
    return 0;
}
