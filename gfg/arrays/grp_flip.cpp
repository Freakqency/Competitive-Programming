#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 9;
    int arr[n] = {0, 0, 1, 1, 0, 0, 1, 1, 0};
    
    int zeros = 0, ones = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] != arr[i - 1]){
            if (arr[i] == 0)
                zeros++;
            else
                ones++;
        }
    }

    if (arr[0] == 0)
        zeros++;
    else
        ones++;

    //now that we have the count; we can flip the min of zeroes and ones
    cout << zeros << " " << ones << endl;
}
