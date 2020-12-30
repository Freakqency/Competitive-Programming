#include <bits/stdc++.h>

using namespace std;

string solve(int arr[], int n) {    
    for (int i = 1; i < n+1; i++)
        arr[i] = i + arr[i];    
    int l = 1, h = 1;
    for (int i = 1; i < n+1; i++) {
        for (int j = i+1; j < n+1; j++) {
            if (arr[i] == arr[j])
                h++;
        }
    }
    if (h == n+1)
        l = h = h - 1;
    string res;
    res += to_string(l);
    res += ' ';
    res += to_string(h);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n+1];
        arr[0] = 0;
        for (int i = 1; i < n+1; i++)
            cin >> arr[i];
        cout << solve(arr, n) << '\n';
    }
    return 0;
}
