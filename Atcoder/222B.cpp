#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, p; cin >> n >> p;
    int cnt = 0;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] < p) cnt++;
    cout << cnt << '\n';
    return 0;
}
