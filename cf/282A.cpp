#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int x = 0;
    while(n--) {
        string str; cin >> str;
        if (str.find('+') != string::npos) x++;
        else x--;
    }
    cout << x << '\n';
    return 0;
}
