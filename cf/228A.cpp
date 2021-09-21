#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> arr) {
    unordered_map<int, int> mp;
    for (int i = 0; i < 4; i++) mp[arr[i]]++;
    return 4 - mp.size();
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    vector<int> arr(4, 0);
    for (int i = 0; i < 4; i++) cin >> arr[i];
    cout << solve(arr) << '\n'; 
    return 0;
}
