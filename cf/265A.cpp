#include <bits/stdc++.h>

using namespace std;

int solve(string str1, string str2) {
    int pos = 1, ptr = 0, m = str2.size();
    for (int i = 0; i < m; i++) {
        if (str1[ptr] == str2[i]) {
            ptr++;
            pos++;
        }
    }
    return pos;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str1, str2; cin >> str1 >> str2;
    cout << solve(str1, str2) << '\n';
    return 0;
}
