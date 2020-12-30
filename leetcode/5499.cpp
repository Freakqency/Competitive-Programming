#include <bits/stdc++.h>

using namespace std;

bool solve(vector<int> arr, int m, int k) {
    string str = "";
    for (int i = 0; i < arr.size(); i++) {
        str += to_string(arr[i]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    vector<int> arr{1,2,4,4,4,4};
    int m = 1, k = 2;
    cout << solve(arr, m, k) << endl;
    return 0;
}
