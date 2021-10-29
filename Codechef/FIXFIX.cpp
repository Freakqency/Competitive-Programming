#include<bits/stdc++.h>

using namespace std;

void solve(int n, int k) {
    vector<int> arr(n);
    bool flag = false;
    for (int i = 1; i <= n; i++) arr[i - 1] = i;
    do {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] == i + 1) cnt++;
        if (cnt == k) {
            flag = true;
            break;
        }
    } while (next_permutation(arr.begin(), arr.end()));
    if (flag) {
        for (int i : arr) cout << i << ' ';
        cout << '\n';
    } else cout << "-1" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
