#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> arr) {
    int p = 0, t = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) p += arr[i];
        else if (arr[i] < 0 ) {
            if (p != 0) p--;
            else t++;
        }
    }
    return t;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(n, arr) << '\n';
    return 0;
}
