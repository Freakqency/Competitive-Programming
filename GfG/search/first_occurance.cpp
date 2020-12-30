#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 3;
    int arr[n] = {1, 5, 5};
    int high = n, low = 0;
    int x = 5;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (mid == 0 && arr[mid] == x)
            return 0;
        if (mid > 0 && arr[mid] == x) {
            if (arr[mid - 1] == x)
                high = mid - 1;
            else
                return mid;
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
}
