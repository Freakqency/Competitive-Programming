#include <bits/stdc++.h>

using namespace std;

string solve(vector<pair<int, int>> arr) {
    sort(arr.begin(), arr.end());
    pair<int, int> lap = arr[0];
    for (int i = 1; i < arr.size(); i++) 
        if (lap.second > arr[i].second) return "Happy Alex";
    return "Poor Alex";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        arr.push_back(make_pair(a, b));
    }
    cout << solve(arr) << '\n';
    return 0;
}
