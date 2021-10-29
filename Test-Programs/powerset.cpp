#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 3;
    int arr[3] = {1,2,3};
    int counter = pow(2,n); // 2^n combinations
    int count = 0;

    for (int i = 0; i < counter; i++){
        vector<int> setVal;
        for (int j = 0; j < n; j++){
            if (i & (1 << j)){ //Convert to binary and check if ith bit is set
                setVal.push_back(arr[j]);
            }
        }
        int sum = accumulate(setVal.begin(), setVal.end(), 0); // Find Sum 
        if (sum % 2 == 0){ // Find Even Subsets
            count++; 
        }
    }

    cout << count;
}
