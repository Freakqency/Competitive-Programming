#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int x = 10;
    int arr[n] = {4, 4, 5, 7, 8};
    int l = 0, h = n, ans = 1e6;
    while (l <= h) {
        int mid = l + ((h - l) / 2);
        if (arr[mid] == x) {
            h = mid - 1;
            ans = mid;
        }
        else if (arr[mid] > x)
            h = mid - 1;
        else
            l = mid + 1;
    }

    return (ans == 1e6) ? -1 : ans;
}
