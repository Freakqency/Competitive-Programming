#include <bits/stdc++.h>

using namespace std;

vector<string> solve(int n, vector<int> arr) {
    vector<int> one, two, three;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) one.push_back(i);
        else if (arr[i] == 2) two.push_back(i);
        else if (arr[i] == 3) three.push_back(i);
    }

    int teams = min({one.size(), two.size(), three.size()});
    vector<string> res{to_string(teams)};
    for (int i = 0; i < teams; i++) {
        string team = "";
        team.append(to_string (one[i] + 1));
        team.append(" ");
        team.append(to_string(two[i] + 1));
        team.append(" ");
        team.append(to_string(three[i] + 1));
        team.append(" ");
        res.push_back(team);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<string> res = solve(n, arr);
    for (string i : res) cout << i << '\n';
    return 0;
}
