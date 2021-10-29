#include <bits/stdc++.h>

using namespace std;

int missingNumber(int arr[], int n) { 
    sort(arr, arr + n);
    
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > 0){
            int val = arr[i] + 1;
            if (val != arr[i + 1])
                return val;
        }
    }

    return arr[n-1] + 1;
} 

int main(){
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    cout << missingNumber(arr, n) << endl;
}
