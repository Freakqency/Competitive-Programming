#include <bits/stdc++.h>

using namespace std;

bool contains(string str1, string str2) {
    int hash[26] = {0};
    for (int i = 0; i < str1.length(); i++)
        hash[str1[i] - 'a']++;
    for (int i = 0; i < str2.length(); i++)
        hash[str2[i] - 'a']--;
    for (int i = 0; i < str2.length(); i++)
        if (hash[str2[i] - 'a'] != 0)
            return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str1 = "abc", str2 = "b", res = "-1";
    int n = str1.length(), res_len = INT_MAX, str2_len = str2.length();
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - 1; j++) {
            string snip = str1.substr(i, j);
            if (contains(snip, str2)) {
                if (res_len > snip.length()) {
                    res_len = snip.length();
                    res = snip;
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
