#include <bits/stdc++.h>
#include <cmath>

using namespace std;

vector<int> solve(int n, vector<int> arr) {
    vector<int> res(n);
    vector<int> idx;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) res.push_back(arr[i] / 2);
        else {
            res.push_back(ceil(arr[i] / 2));
            idx.push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (auto i : solve(n, arr)) cout << i << '\n';
    return 0;
}
