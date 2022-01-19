#include<bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>> arr) {
    cout << '\n';
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << ' ';
            cout << arr[i][j + 1] << ' ';
            cout << arr[i][j + 2] << ' ';
            break;
        }
        cout << '\n';
    }
    return -1;
}


int main() {
    int n = 6;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    cout << solve(arr) << '\n';
    return 0;
}


/* 1 2 3 0 0 0 */
/* 0 1 0 0 0 0 */
/* 1 1 1 0 0 0 */
/* 0 0 2 4 4 0 */
/* 0 0 0 2 0 0 */
/* 0 0 1 2 4 0 */
