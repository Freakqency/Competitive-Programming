#include <bits/stdc++.h>

using namespace std;

int solve(int arr[], int n) {
    const int N = 10000;
    int hash[N] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    map<int, int> mp;
    for (int i = 0; i < N; i++) {
        if (hash[i] > 0) {
            mp[hash[i]]++;
        }
    }
    int mode = 0;
    for (auto i : mp) {
        if (i.second > mode) {
            mode = i.second;
        }
    }
    int res = 0;
    for (auto i = mp.begin(); i != mp.end(); i++) {
        if (i->second == mode) {
            res = i->first;
            break;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];        
        cout << solve(arr, n) << '\n';
    }
    return 0;
}
