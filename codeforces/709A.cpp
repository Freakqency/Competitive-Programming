#include <bits/stdc++.h>

using namespace std;

int solve(int n, int b, int d, vector<int> arr) {
    int overflow = 0, res = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= b) {
            if (overflow > d) {
                res++;
                overflow = 0;
                overflow += arr[i];
            }
            else overflow += arr[i];
        }
    }

    if (overflow > d) res++;

    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    

    int n, b, d; cin >> n >> b >> d;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << solve(n, b, d, arr) << '\n';

    return 0;
}
