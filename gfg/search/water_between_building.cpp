#include <bits/stdc++.h>

using namespace std;

int naive(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int curr = (min(arr[i], arr[j]) * (j - i - 1));
            res = max(res, curr);
        }
    }
    return res;
}

int two_pointer(int arr[], int n) {
    int i = 0, j = n-1, res = 0;
    while (i < j) {
        if (arr[i] < arr[j]) {
            int curr = (arr[i] * (j - i - 1));
            res = max(res, curr);
            i++;
        }
        else if (arr[j] < arr[i]) {
            int curr = (arr[j] * (j - i - 1));
            res = max(res, curr);
            j--;
        }
        else {
            int curr = (arr[i] * (j - i - 1));
            res = max(res, curr);;
            i++;
            j--;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int arr[] = {2, 1, 3, 4, 6, 5}, n = 6;
    cout << two_pointer(arr, n) << endl;
    return 0;
}
