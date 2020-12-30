#include <bits/stdc++.h>

using namespace std;

void getDays(int arr[], int n, int end, int start){

    int hi = INT_MIN, hi_idx = 0;
    for (int i = start; i < end; i++){
        if (arr[i] > hi){
            hi = arr[i];
            hi_idx = i;
        }
        else
            break;
    }

    int lo = INT_MAX, lo_idx = 0;
    for (int i = start; i < hi_idx; i++){
        if (arr[i] < lo){
            lo = arr[i];
            lo_idx = i;
        }
    }

    cout << lo_idx << " " << hi_idx << endl;
}

int main(){
    int n = 10;
    int arr[n] = {23, 13, 25, 29, 33, 19, 34, 45, 65, 67};

    getDays(arr, n, 5, 1);
}
