#include <bits/stdc++.h>

using namespace std;

string solve(int n, int k) {
    string res = "";
    for (int i = 0; i < n; i++) res += ((i - 'a') % 26 ) + 'a';
    transform(res.begin(), res.end(), res.begin(), ::tolower);
    if (n - k > 0) {
        string to_replace = "";
        int j = 0;
        for (int i = 0; i < k; i++) to_replace += res[i];
        for (int i = k; i < n; i++) {
            res[i] = to_replace[j++ % k];
            // j = (j + 1 > k) ?  (j + 1) % k : j + 1;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n, k; cin >> n >> k;
    cout << solve(n, k) << '\n';
    return 0;
}
