#include <bits/stdc++.h>

using namespace std;

int greatest_power(int n) {
    int p = (int) log2(n);
    return (int) pow(2, p);
}

vector<int> solve(vector<int> arr, int n, int x) {
    int i = 0, j;
    while (x--) {
        int mask = greatest_power(arr[i]);
        for (int k = i + 1; k < n; k++) {
            if ((mask ^ arr[k]) < arr[k]) {
                j = k;
                break;                
            } else j = n - 1;
        }
        arr[i] ^= mask;
        arr[j] ^= mask;
        while (arr[i] == 0 && i + 1 < n) i++;
        if (i == n - 1) {
            if (x == 0) break;
            else if (x & 1 && n == 2) {
                arr[i] ^= 1;
                arr[i - 1]  ^= 1;
                break;
            }
            else break;
        }
    }
    return arr;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> result = solve(arr, n, x);
        for (int i : result)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}
