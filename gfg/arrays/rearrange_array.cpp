#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 11;
    int arr[n] = {10,20,30,40,50,60,70,80,90,100,110};
    
    int temp[n];
    for (int i = 0; i < n; i++) temp[i] = arr[i];

    sort(arr, arr + n, greater<int>());
    sort(temp, temp + n);

    int res[n];

    int j = 0;
    int k = 0;
    for (int i = 0; i < n; i++){
        if (i % 2 != 0){
            res[i] = temp[j];
            j++;
        }
        else{
            res[i] = arr[k];
            k++;
        }
    }

    for (int i : res)
        cout << i << " ";
}
