#include <bits/stdc++.h>

using namespace std;

string solve(int arr[], int n) {
    bool zero = false;
    for (int i = 1; i < n-1; i++) {
        if (arr[i] == 0 && arr[i-1] == 0 && arr[i+1] == 0) {
            arr[i] = 1;
            zero = true;
            break;
        }
    }
    if (!zero) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                return "Yes";
            }
        }
    }
    return "No";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(arr, n) << '\n';
    }
    return 0;
}
