#include <bits/stdc++.h>

using namespace std;

string solve(string str) {
    int n = str.size(), low = 0, up = 0;
    for (int i = 0; i < n; i++) {
        if (islower(str[i])) low++;
        else if (isupper(str[i])) up++;
    }
    if (up > low) transform(str.begin(), str.end(), str.begin(), ::toupper);
    else transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str; cin >> str;
    cout << solve(str) << '\n';
    return 0;
}
