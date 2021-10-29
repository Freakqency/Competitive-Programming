#include <bits/stdc++.h>

using namespace std;

string solve(string str) {
    map<char, int> mp;
    for (int i = 0; i < str.size(); i++) mp[str[i]]++;
    int cnt = mp.size();
    return (cnt % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str; cin >> str;
    cout << solve(str) << '\n';
    return 0;
}
