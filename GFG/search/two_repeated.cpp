#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 2;
    int arr[n + 2] = {1, 2, 2, 1};
    int hash[n+1] = {0};
    vector<int> res;

    for (int i = 0; i < n+2; i++) {
        hash[arr[i]]++;
        if (hash[arr[i]] == 2)
            res.push_back(arr[i]);
    }

    for (int i : res)
        cout << i << " ";
}
