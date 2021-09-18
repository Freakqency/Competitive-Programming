#include <bits/stdc++.h>

using namespace std;

int solve(int n, int h, vector<int> arr) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > h) res += 2;
        else res += 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n, h; cin >> n >> h;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(n, h, arr) << '\n';
    return 0;
}
