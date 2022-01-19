#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<vector<int>> arr) {
    sort(arr.begin(), arr.end());
    int cnt = n;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) cnt--;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++) {
        int l; cin >> l;
        vector<int> temp(l);
        for (int j = 0; j < l; j++) cin >> temp[j];
        arr.push_back(temp);
    }
    cout << solve(n, arr) << '\n';
    return 0;
}
