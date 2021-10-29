#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string str1, str2; cin >> str1 >> str2;
    reverse(str1.begin(), str1.end());
    cout << (str1 == str2 ? "YES" : "NO") << '\n';
    return 0;
}
