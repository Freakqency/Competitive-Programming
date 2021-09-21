#include <bits/stdc++.h>

using namespace std;

string solve(string str, string pat) {
    int n = str.length();
    int m = pat.length();
    string res = "";    
    for (int i = 0; i < m; i++) {
        int found = str.find(pat[i]);
        str[found] = 'A';
    }
    int diff;
    for (diff = 0; diff < m; diff++) {
        if (pat[diff] != pat[0]) {
            break;
        }
    }
    sort(str.begin(), str.end());
    for (int i = 0; i < n; i++) {
        if (str[i] < pat[0] && str[i] != 'A') {
            res += str[i];
            str[i] = 'A';
        }
        else if (str[i] == pat[0] && str[i] != 'A') {
            if (str[i] < pat[diff]) {
                res += str[i];
                str[i] = 'A';
            }
        }
    }
    res += pat;
    str.erase (remove(str.begin(), str.end(), 'A'), str.end());
    res += str;
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        string str, pat; cin >> str >> pat;
        cout << solve(str, pat) << endl;
    }
    return 0;
}
