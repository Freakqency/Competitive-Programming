#include <bits/stdc++.h>

using namespace std;

int maxIndexDiff(int arr[], int n) { 
    int max_val = 0;
    for (int i = 0; i < n; i++){
        for (int j = n - 1; j >= 0; j--){
            if (arr[i] <= arr[j]){
                max_val = max(max_val, j - i);
            }
        }
    }
    
    return max_val;
}

int main(){
    int n = 2;
    int arr[n] {75, 49};
    cout << maxIndexDiff(arr, n) << endl;
}
