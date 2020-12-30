#include <bits/stdc++.h>

using namespace std;

int firstOccurance(int arr[], int n, int x) {
    int high = n, low = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (mid == 0 && arr[mid] == x)
            return 0;
        if (mid > 0 && arr[mid] == x) {
            if (arr[mid-1] == arr[mid])
                high = mid - 1;
            else
                return mid;
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else 
            low = mid + 1;
    }
    return -1;
}

int lastOccurance(int arr[], int n, int x) {
    int high = n, low = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (mid == 0 && arr[mid] == x)
            return 0;
        if (mid > 0 && arr[mid] == x) {
            if (arr[mid+1] == arr[mid])
                low = mid + 1;
            else 
                return mid;
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int n = 5;
    int arr[n] = {1,2,3,3,4};
    int count = 0;
    int idx = 0;
    for (int i = 0; i < n; i++) {
        int initial = firstOccurance(arr, n, arr[i]);
        int last = lastOccurance(arr, n, arr[i]);
        if (initial - last == 0)
            continue;
        else {
            count = last - initial + 1;
            idx = arr[initial];
        }
    }
    pair<int, int> res = make_pair(idx, count);
    return res;
}
