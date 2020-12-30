#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1,1,1,1,1,1};
    int res = 0;
    int k = 2;
    for (int i = 0; i < 6 - k+1 ; i++){
        int sum = 0;
        for (int j = 0; j < k; j++){
            sum += arr[i+j];
        }
        if (sum == 3){
            res++;
        }
    }

    cout << res << "\n";
}
