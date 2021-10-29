#include <bits/stdc++.h>

using namespace std;

string solve(string str) {
    int n = str.size();
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        if (isdigit(str[i])) arr.push_back(str[i] - '0');
    }
    sort(arr.begin(), arr.end());
    string res;
    for (int i = 0; i < arr.size(); i++) res += to_string(arr[i]) + '+';
    res.pop_back();
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str; cin >> str;
    cout << solve(str) << '\n';
    return 0;
}
