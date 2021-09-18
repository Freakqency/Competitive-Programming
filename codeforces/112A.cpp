#include <bits/stdc++.h>

using namespace std;

int solve(string str1, string str2) {
    int n = str1.size();
    int res = 0;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    for (int i = 0; i < n; i++) {
        if (str1[i] < str2[i]) {
            res = -1;
            break;
        } else if (str2[i] < str1[i]) {
            res = 1;
            break;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str1, str2; cin >> str1 >> str2;
    cout << solve(str1, str2) << '\n';
    return 0;
}
