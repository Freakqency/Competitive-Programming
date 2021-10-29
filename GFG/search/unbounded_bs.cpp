#include<bits/stdc++.h>

using namespace std;

int binarysearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int i = 1;
    int x = 17;
    while (arr[i] < x)
        i *= 2;
    if (arr[i] == x) {
        cout << i << endl;
        return 0;
    }
    cout << binarysearch(arr, i/2 + 1, i - 1, x) << endl;
}
