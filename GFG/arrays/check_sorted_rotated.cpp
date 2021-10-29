#include <bits/stdc++.h>

using namespace std;

int checkIncreasing(int arr[], int n){
    int minE = INT_MAX, min_idx = 0;
    int maxE = INT_MIN, max_idx = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] < minE){
            minE = arr[i];
            min_idx = i;
        }
        if (arr[i] > maxE){
            maxE = arr[i];
            max_idx = i;
        }
    }

    int flg1 = 1;
    for (int i = 1; i < max_idx; i++)
        if (arr[i] < arr[i - 1]){
            flg1 = 0;
            break;
        }

    int flg2 = 1;
    for (int i = min_idx + 1; i < n; i++)
        if (arr[i] < arr[i - 1]){
            flg2 = 0;
            break;
        }

    if (flg1 && flg2 &&(arr[n - 1] < arr[0]))
        return 1;

    return 0;
}

int checkDecreasing(int arr[], int n){
    int minE = INT_MAX, min_idx = -1;
    int maxE = INT_MIN, max_idx = n + 1;
    for (int i = 0; i < n; i++){
        if (arr[i] < minE){
            minE = arr[i];
            min_idx = i;
        }
        if (arr[i] > maxE){
            maxE = arr[i];
            max_idx = i;
        }
    }
    
    int flg1 = 1;
    for (int i = 1; i < min_idx; i++)
        if (arr[i] > arr[i - 1]){
            flg1 = 0;
            break;
        }

    cout << flg1 << endl;
    int flg2 = 1;
    for (int i = max_idx + 1; i < n; i++)
        if (arr[i] > arr[i - 1]){
            flg2 = 0;
            break;
        }

    cout << flg2 << endl;
    if (flg1 && flg2 &&(arr[n - 1] > arr[0]))
        return 1;

    return 0;
}

int main(){
    int n = 4;
    int arr[n] = {10, 20, 30, 14};

    cout << checkDecreasing(arr, n) << endl;
}
