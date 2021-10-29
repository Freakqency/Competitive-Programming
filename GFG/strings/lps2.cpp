#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str = "abcab";
    int n = str.length(), len = 0, lps[n], i = 1;
    lps[0] = 0;
    while (i < n) {
        if (str[i] == str[len]) lps[i++] = ++len;
        else {
            if (len == 0) lps[i++] = 0;
            else len = lps[len - 1];
        }

    }
    cout << lps[n-1] << endl;
    return 0;
}
