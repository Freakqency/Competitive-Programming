#include <bits/stdc++.h>

using namespace std;

int get_max_element(map<int, int> mp) {
    int max_val = INT_MIN;
    for (auto i : mp)
        if (i.second > max_val)  max_val = i.second;
    return max_val;
}

void solve(int n, vector<int> arr) {
    map<int, int> mp;
    for (int i = 0; i < n; i++) mp[arr[i]]++;
    int x = get_max_element(mp);
    int max_val = *max_element(arr.begin(), arr.end());
    if (x > 2 || mp[max_val] > 1) cout << -1 << '\n';
    else {
        vector<int> right, left;
        for (auto i : mp) {
            if (i.second == 1) right.push_back(i.first);
            else {
                left.push_back(i.first);
                right.push_back(i.first);
            }
        }
        sort(left.begin(), left.end());
        sort(right.begin(), right.end(), greater<int>());
        for (auto i : left) cout << i << ' ';
        for (auto i : right) cout << i << ' ';
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        solve(n, arr);
    }
    return 0;
}
