#include <bits/stdc++.h>

using namespace std;

string solve(string str) {
    int n = str.length();    
    string res = "";
    if (n > 10) {
        res += str[0];
        res += to_string(n - 2);
        res += str[n - 1];
        return res;
    }    
    return str;
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
