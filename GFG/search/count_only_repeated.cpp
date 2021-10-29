#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 3, 4};
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    int max_val = 0;
    int val = 0;
    for (auto i : mp) {
        if (i.second > max_val) {
            max_val = i.second;
            val = i.first;
        }
    }
    pair <int, int> res = make_pair(val, max_val);
    return res;
}

