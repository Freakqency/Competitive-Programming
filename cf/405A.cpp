#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << '\n';
    return 0;
}
