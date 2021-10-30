#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string str; cin >> str;
    map<char, int> mp;
    for (int i = 0; i < str.size(); i++)
        mp[str[i]]++;
    if (mp.size() == 3) cout << 6 << '\n';
    else if (mp.size() == 2) cout << 3 << '\n';
    else if (mp.size() == 1) cout << 1 << '\n';
    return 0;
}
