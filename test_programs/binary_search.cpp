#include<bits/stdc++.h>

using namespace std;

int bsearch (int arr[], int l, int r, int x){
    if (r >= l){
        int mid = l + (r - l)/2;

        if (arr[mid] == x){
            return mid;
        }

        if (arr[mid] > x){
            return bsearch(arr, l, mid - 1, x);
        }

        return bsearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main(){
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    int l = 0;
    int r = n - 1;
    int x = 6;
    sort(arr, arr + n);
    cout << bsearch(arr, l, r, x);
}
