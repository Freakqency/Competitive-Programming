#include <bits/stdc++.h>

using namespace std;

string solve(int n, vector<int> arr) {
    vector<int> inverse_perm(n+1, 0);
    for (int i = 1; i <= n; i++) inverse_perm[arr[i]] = i;
    return (inverse_perm == arr) ? "ambiguous" : "not ambiguous";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n = 1;
    while (n != 0) {
        cin >> n;
        if (n == 0) break;
        vector<int> arr(n+1, 0);
        for (int i = 1; i <= n; i++) cin >> arr[i];
        cout << solve(n, arr) << '\n';
    }
    return 0;
}
