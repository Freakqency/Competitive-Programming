#include <bits/stdc++.h>

using namespace std;

void rotate_right(vector<int>& arr){
    int n = arr.size();
    int temp = arr[n-1];
    for (int i = n-1; i > 0; i--)
        arr[i] = arr[i-1];
    arr[0] = temp;
}

int main(){
    vector<int> arr{1,2,3};
    int k =2;
    int n = arr.size();
    int temp = arr[n-1];
    for (int i = 0; i < k; i++){
        rotate_right(arr);
    }


    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
}
