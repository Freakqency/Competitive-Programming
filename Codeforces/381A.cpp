#include <bits/stdc++.h>

using namespace std;

string solve(int n, vector<int> arr) {
    int l = 0, r = n - 1, s = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) s += (arr[l] >= arr[r]) ?  arr[l++] : arr[r--];
        else d += (arr[l] >= arr[r]) ? arr[l++] : arr[r--];
    }
    string res = to_string(s) + ' ' + to_string(d);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << solve(n, arr) << '\n';
    return 0;
}
