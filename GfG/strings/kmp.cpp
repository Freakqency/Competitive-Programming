#include <bits/stdc++.h>

using namespace std;

void filllps(string pat, int lps[]) {
    int i = 1, len = 0, n = pat.length();
    lps[0] = 0;
    while (i < n) {
        if (pat[i] == pat[len]) lps[i++] = ++len;
        else {
            if (len == 0) lps[i++] = 0;
            else len = lps[len - 1];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string txt = "ababcababaad", pat = "ababa";
    int n = txt.length(), m = pat.length(), lps[m], i = 0, j = 0;
    filllps(pat, lps);
    while (i < n) {
        if (pat[j] == txt[i]) ++i, ++j;
        if (j == m) {
            cout << i - j;
            j = lps[j - 1];
        }
        else if (i < n && pat[j] != txt[i]) {
            if (j == 0) i++;
            else j = lps[j - 1];
        }
    }
    return 0;
}
