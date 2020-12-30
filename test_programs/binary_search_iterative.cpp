#include <bits/stdc++.h>

using namespace std;

int bsearch(int arr[], int l, int r, int x){
    while(r >= l){
        int mid = l + (r - l)/2;
        
        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            l = mid + 1;

        else
            r = mid -1;

    }

    return -1;
}

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,6};
    int l = 0;
    int r = n - 1;
    int x = 6;
    cout << bsearch(arr, l, r, x);
}
