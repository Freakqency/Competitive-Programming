#include <bits/stdc++.h>

using namespace std;

int IsAsc(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            return false;

    return true;
}

int IsDesc(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
        if (arr[i] < arr[i + 1])
            return false;

    return true;
}


int main(){
    int n = 4;
    int arr1[n] = {10, 20, 30, 14};

    if (n == 1)
        return true;

    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = arr1[i];

    int maxE = arr[0], max_idx = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] >= maxE){
            maxE = arr[i];
            max_idx = i;
        }
    }

    rotate (arr, arr + max_idx + 1, arr + n);
    int flag = 1;
    for (int i = 0; i < n; i++)
        if (arr[i] != arr1[i]){
            flag = 0;
            break;
        }
    if ((flag == 0) && IsAsc(arr, n))
        return true;

    rotate (arr, arr + n - 1, arr + n);
    flag = 1;
    for (int i = 0; i < n; i++)
        if (arr[i] != arr1[i]){
            flag = 0;
            break;
        }
    if ((flag == 0) && IsDesc(arr, n))
        return true;

    return false;
}
