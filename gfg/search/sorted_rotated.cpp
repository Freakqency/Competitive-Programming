#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int arr[] = {8, 10, 2, 4, 6};
    int high = n - 1, low = 0;
    if (high < low) {
        return arr[0];
    }
    if (high == low) { 
        return arr[0]; 
    }
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[high] > arr[mid]) {
            high = mid - 1;
        }
        else {
            if (mid < high && arr[mid + 1] < arr[mid])
                return arr[mid+1];
            if (mid < low && arr[mid] < arr[mid - 1]) {
                return arr[mid];
            }
            else {
                low = mid + 1;
            }
        }
    }
}
