#include <bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>> arr) {
    int row , col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] == 1) {
                row = i;
                col = j;
                break;
            }
        }
    }
    int res = abs(row - 2) + abs(col - 2);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<vector<int>> arr(5, vector<int>(5, 0));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }
    cout << solve(arr) << '\n';
    return 0;
}
