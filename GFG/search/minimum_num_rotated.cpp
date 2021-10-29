#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int arr[n] = {3, 4, 5, 1, 2};
    int low = 0, high = n;
    while (low <= high) {
        int mid = low + ((high - low) / 2);
        if (arr[mid-1] > arr[mid] && arr[mid+1] > arr[mid])
                return mid;
        else if (mid > 0 && arr[mid-1] < arr[mid] && arr[mid+1] > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
}
