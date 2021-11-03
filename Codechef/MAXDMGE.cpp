#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) {
            if (i == 0) 
                cout << (arr[i] & arr[i + 1]) << ' ';
            else if (i == n - 1) 
                cout << (arr[i] & arr[i - 1]) << ' ';
            else 
                cout << max(arr[i] & arr[i + 1], arr[i] & arr[i - 1]) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
