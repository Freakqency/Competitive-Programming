#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {0,10,100};
    int n = 4;
    do {
            cout << arr[0] << " " << arr[1] << " " << arr[2]  + arr[1]<< " "<< arr[2] + arr[1] + arr[1] << "\n";
    }
    while(next_permutation(arr, arr + 3));
}
