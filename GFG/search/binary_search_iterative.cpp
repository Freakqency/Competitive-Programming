#include <bits/stdc++.h>

using namespace std;

int binary_search(int arr[], int n, int x){
    int hi = n, lo = 0;
    while (lo <= hi){
        int mid = (hi + lo) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}

int main(){
    int n = 10;
    int arr[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int x = 90;
    cout << binary_search(arr, n , x) << endl;
}
