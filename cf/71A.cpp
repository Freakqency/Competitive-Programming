#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    while (n--) {
        string str; cin >> str;
        int m = str.size();
        if (m > 10) {
            string res = "";
            res += str[0]; 
            res += to_string(m - 2);
            res += str[m - 1];
            cout << res << '\n';
        }
        else cout << str << '\n' ;
    }
    return 0;
}
