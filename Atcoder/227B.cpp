#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int> arr) {
    int cnt = 0;
    sort(arr.begin(), arr.end());
    auto it = unique(arr.begin(), arr.end());
    arr.resize(distance(arr.begin(), it));
    for (int i : arr) {
        for (int j = 0; j <= i / 4; j++) {
            bool flag = false;
            for (int k = 0; k <= i / 4; k++) {
                int val = (k * j) + (int) (0.75 * j) + (int )(0.75 * k);
                if (val ==  i / 4) {
                    cout << k << ' '<< j << '\n';
                    cnt++;
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
    }
    int res = n - cnt;
    return res;
}

int upsolve(int n, vector<int> arr) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 1; j <= arr[i]; j++) {
            for (int k = 1; k <= arr[i]; k++) {
                if (4 * j * k + 3 * j + 3 * k == arr[i]) flag = 1;
            }
        }
        if (flag == 0) res++;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    /* cout << solve(n, arr) << '\n'; */
    cout << upsolve(n, arr) << '\n';
    return 0;
}
