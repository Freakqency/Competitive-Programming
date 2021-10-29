#include <bits/stdc++.h>

using namespace std;

string solve(vector<int> arr, int n) {
    int moves = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (arr[i] > (i + 1)) return "Second";
        moves += ((i + 1) - arr[i]);
    }
    return (moves % 2 == 0) ? "Second" : "First";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << solve(arr, n) << '\n';
    }
    return 0;
}
