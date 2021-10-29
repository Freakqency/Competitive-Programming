#include <bits/stdc++.h>

using namespace std;

#define d 256

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string txt = "lkjsdfhaiuehaoewiuraoikdehjakdsfhlsjdkihalieushralkehfailuewhfaklfjsdhfliuewahf", pat = "ahf";
    int n = txt.length(), m = pat.length(), h = 1, p = 0, t = 0, i, j, q = 101;
    for (i = 0; i < m - 1; i++) h = (h * d) % q;
    for (i = 0; i < m; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }
    for (i = 0; i <= n - m; i++) {
        if (p == t) {
            for (j = 0; j < m; j++) 
                if (pat[j] != txt[i + j]) break;
            if (j == m) cout << "Pattern Found At Index: " << i << endl;
        }
        if (i < n - m){
            t = (d * (t - txt[i] * h) + txt[i + m]) % q;
            if (t < 0) t += q;
        }
    }
    return 0;
}
