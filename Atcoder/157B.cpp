#include <bits/stdc++.h>

using namespace std;

string solve(int n, vector<vector<int>> arr, vector<int> nums) {
    bool res = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (arr[j][k] == nums[i]) arr[j][k] = 0;
            }
        }
    }
    if (arr[0][0] == 0 && arr[0][1] == 0 && arr[0][2] == 0) res = true;
    else if (arr[0][0] == 0 && arr[1][0] == 0 && arr[2][0] == 0) res = true;
    else if (arr[2][0] == 0 && arr[2][1] == 0 && arr[2][2] == 0) res = true;
    else if (arr[0][2] == 0 && arr[1][2] == 0 && arr[2][2] == 0) res = true;
    else if (arr[0][2] == 0 && arr[1][1] == 0 && arr[2][0] == 0) res = true;
    else if (arr[1][0] == 0 && arr[1][1] == 0 && arr[1][2] == 0) res = true;
    else if (arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0) res = true;
    return (res) ? "Yes" : "No";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<vector<int>> arr(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cin >> arr[i][j];
    }
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    cout << solve(n, arr, nums) << '\n';
    return 0;
}
