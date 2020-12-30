#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    int count = 0;
    int l;
    for (int i = n-1; i > 0; i--) {
        int val = arr[i][i-1]+1;
        if (val != arr[i][i]) {
            count++;
            l = i + 1;
            for (int j = 0; j < l; j++)
                for (int k = j; k < l; k++) {
                    int temp = arr[j][k];
                    arr[j][k] = arr[k][j];
                    arr[k][j] = temp;
                }
        }
    }
    cout << count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
