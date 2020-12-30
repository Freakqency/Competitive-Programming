#include <bits/stdc++.h>

using namespace std;

char solve(string str) {    
    int n = str.length();
    return str[n-2];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    string str;
    cin >> str;
    cout << solve(str) << '\n';
    return 0;
}
