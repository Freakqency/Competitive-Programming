#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 10;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 8;
    int high = n, low = 0;
    while (low <= high) {
        int mid = low + ((high-low) / 2);
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}
