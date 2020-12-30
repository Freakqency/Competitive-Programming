#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> arr) {
    int res = 0;
    int prod = 1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0)
            prod *= arr[i];
        if (prod > 0) {
            res = max(res, prod);
        }
    }
    return res;
}

int main() {
    vector<int> arr{-1,2};
    cout << solve(arr) << '\n';
    return 0;
}
