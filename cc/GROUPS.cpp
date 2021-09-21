#include <bits/stdc++.h>

using namespace std;

int solve(string str) {
    int n = str.length(), result = 0, i = 0;
    while (i < n) {
        if (str[i] == '1') {
            result++;
            while (str[i] == '1') i++;
        }
        else i++;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        string str; cin >> str;
        cout << solve(str) << endl;
    }
    return 0;
}
