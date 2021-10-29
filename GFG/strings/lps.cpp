#include <bits/stdc++.h>

using namespace std;

int lps(string str, int n){
    for (int len = n - 1; len > 0; len--) {
        bool flag = true;
        for (int i = 0; i < len; i++) 
            flag = false;
        if (flag) return len;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str = "ababacab";
    int n = str.length(), lps_arr[n];
    for (int i = 0; i < n; i++) lps_arr[i] = lps(str, i + 1);
    for (auto i : lps_arr) cout << i << endl;
    return 0;
}
