#include <bits/stdc++.h>

using namespace std;

string solve(string str, string weight) {
    int n = str.size(), m = weight.size();
    int left = str.find('|'), right = n - left - 1;
    int diff = abs(left - right);
    if (diff > m) return "Impossible";
    int rem = (m - diff);
    string res;
    if (left <= right && rem % 2 == 0) {
            for (int i = 0; i < left; i++) res += str[i];
            for (int i = 0; i < diff; i++) res += weight[i];
            for (int i = diff; i < diff + (rem / 2); i++) res += weight[i];
            for (int i = left; i < n; i++) res += str[i];
            for (int i = diff + (rem / 2); i < m; i++) res += weight[i];
    }
    else if (right < left && rem % 2 == 0) {
        string res_right, res_left;
        for (int i = 0; i < left; i++) res_left += str[i];
        for (int i = left; i < n; i++) res_right += str[i];
        for (int i = 0; i < diff; i++) res_right += weight[i];
        for (int i = diff; i < diff + (rem / 2); i++) res_left += weight[i];
        for (int i = diff + (rem / 2); i < m; i++) res_right += weight[i];
        res = res_left + res_right;
    }
    else res = "Impossible";
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string str, weight; cin >> str >> weight;
    cout << solve(str, weight) << '\n';
    return 0;
}
