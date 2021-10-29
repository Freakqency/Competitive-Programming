#include <bits/stdc++.h>

using namespace std;

string solve(vector<vector<char>> arr) {
    int r = 0, c = 0;
    while (true) {
        map<char, int> mp;
        for (int i = 0 + r; i < r + 2; i++)
            for (int j = 0 + c; j < c + 2; j++)
                mp[arr[i][j]]++;
        if (mp.size() == 1) return "YES";
        if (mp.size() == 2) {
            if (mp['#'] == 3 && mp['.'] == 1) return "YES";
            if (mp['.'] == 3 && mp['#'] == 1) return "YES";
        }
        if (c == 2 && r == 2) break;
        if (c == 2) c = 0, r++;
        else c++;
    }
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n = 4; 
    vector<vector<char>> arr(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    cout << solve(arr) << '\n';
    return 0;
}
