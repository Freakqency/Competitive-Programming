#include <bits/stdc++.h>

using namespace std;

string solve(string str) {
    int n = str.size();
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'
                || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'Y' || str[i] == 'y') str[i] = '0';
    }
    string cons = "";
    for (int i = 0; i < n; i++) {
        if (str[i] != '0') {
            cons += '.';
            cons += str[i];
        }
    }
    transform(cons.begin(), cons.end(), cons.begin(), ::towlower);
    return cons;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string str; cin >> str;
    cout << solve(str) << '\n';
    return 0;
}
