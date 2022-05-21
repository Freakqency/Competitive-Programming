#include <bits/stdc++.h>

using namespace std;

string solve(string str) {
    int n = str.size();
    string res = "";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < n; i++) {
        if (str[i] != 'a' && str[i] != 'o' && str[i] != 'y' && str[i] != 'e'
                && str[i] != 'u' && str[i] != 'i') {
            res += '.';
            res += str[i];
        }
    }
    transform(res.begin(), res.end(), res.begin(), ::tolower);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string str; cin >> str;
    cout << solve(str) << '\n';
    return 0;
}
