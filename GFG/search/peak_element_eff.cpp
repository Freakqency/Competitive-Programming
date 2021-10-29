#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 3;
    int arr[n] = {1, 2, 3};
    int high = n, low = 0;
    while (low <= high) {
        int mid = low + ((high - low) / 2);
        if ((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))            
            return mid;
        else if (mid > 0 && arr[mid - 1] > arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
}
