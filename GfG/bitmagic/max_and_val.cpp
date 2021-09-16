#include <bits/stdc++.h>

using namespace std;

int maxAND(int arr[], int n) {
    int maxVal = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int curr_max = arr[i] & arr[j];
            maxVal = max(curr_max, maxVal);
        }
    }
    return maxVal;
}

int checkBit(int pattern, int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if ((pattern & arr[i]) == pattern) count++;
    return count;
}

int effmaxAND(int arr[], int n) {
    int res = 0, count;
    for (int i = 31; i >= 0; i--) {
        count = checkBit(res | (1 << i), arr, n);
        if (count >= 2) res |= (1 << i);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int arr[] = {4, 8, 12, 16};
    int n = 4;
    cout << maxAND(arr, n);
    return 0;
}
