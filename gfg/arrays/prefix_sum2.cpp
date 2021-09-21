#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 3;
    int l[n] = {1, 2, 3};
    int r[n] = {3, 5, 7};

    // assuming max n value could be 1000
    vector<int> arr(1000);
    for (int i = 0; i < n; i++){
        arr[l[i]]++;
        arr[r[i] + 1]--;
    }

    //calculating prefix sum
    int maxVal = arr[0], res = 0;
    for (int i = 1; i < 1000; i++){
        arr[i] += arr[i - 1];
        if (maxVal < arr[i]){
            maxVal = arr[i];
            res = i;
        }
    }

    cout << res << endl;
}
