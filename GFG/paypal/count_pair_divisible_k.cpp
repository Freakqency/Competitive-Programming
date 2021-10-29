#include<bits/stdc++.h>

using namespace std;

int countKdivPair(vector<int> arr, int n, int k) {
    int freq[k] ={0}, res = 0;
    for (int i = 0; i < n; i++) {
        int rem = arr[i] % k;
        res += freq[(k - rem) % k];
        freq[rem]++;
    }
    return res;
}

int main() {
    int n = 6, k = 4;
    vector<int> arr{2, 2, 1, 7, 5, 3};
    cout << countKdivPair(arr, n, k) << endl;
    return 0;
}