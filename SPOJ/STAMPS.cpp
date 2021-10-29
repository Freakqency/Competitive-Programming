#include <bits/stdc++.h>

using namespace std;

string solve(int n, int k, vector<int> arr) {
    sort(arr.begin(), arr.end(), greater<int>());
    int result = 0, sum = 0;
    for (int i = 0; i < (int) arr.size(); i++) {
        sum += arr[i];
        result++;
        if (sum >= k) break;
    }
    if (sum >= k) return to_string(result);
    return "impossible";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int k, n; cin >> k >> n;
        vector<int> arr(n, 0);
        for (int j = 0; j < n; j++) cin >> arr[j];
        string out = "Scenario #";
        out += to_string(i);
        out += ':';
        cout << out << '\n' << solve(n, k, arr) << '\n' << '\n';
    }
    return 0;
}
