#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 6;
    int arr[n] = {10, 15, 20, 20, 40, 40};
    int high = n, low = 0;
    int x = 20;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (mid == 0 && arr[mid] == x)
            return 0;
        if (mid > 0 && arr[mid] == x) {
            if (arr[mid + 1] == x)
                low = mid + 1;
            else
                return mid;
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
}
