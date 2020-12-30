#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[], int low, int high, int x) {    
    int mid = low + ((high - low) / 2);
    if (low > high)
        return -1;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return binary_search(arr, low, mid - 1, x);
    else
        return binary_search(arr, mid + 1, high, x);
}

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 0;
    cout << binary_search(arr, 0, 10, x) << endl;
}
