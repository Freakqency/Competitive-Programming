#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    unordered_set<string> st;
    int n, cnt = 0; cin >> n;
    vector<string> friends;
    unordered_set<string> ust;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        int m; cin >> m;
        for (int j = 0; j < m; j++) {
            string tmp; cin >> tmp;
            ust.insert(tmp);
        }
        friends.push_back(str);
    }
    for (int i = 0; i < n; i++) {
        if (ust.find(friends[i]) != ust.end()) cnt++;
    }
    cout << ust.size() - cnt << '\n';
    return 0;
}
