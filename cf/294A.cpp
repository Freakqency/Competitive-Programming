#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int idx; cin >> idx;
        int bird; cin >> bird;
        idx -= 1;
        int limit = arr[idx];
        arr[idx]--;
        for (int j = 1; j < bird; j++) arr[idx]--;
        if (idx - 1 < n && idx - 1 >= 0) {
            for (int j = 1; j < bird; j++) arr[idx - 1]++;
        }
        for (int j = bird + 1; j <= limit; j++) arr[idx]--;
        if (idx + 1 < n && idx + 1 >= 0) {
            for (int j = bird + 1; j <= limit; j++) arr[idx + 1]++;
        }

    }
    for (int i : arr) cout << i << '\n';
    return 0;
}
