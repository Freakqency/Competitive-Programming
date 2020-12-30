#include <iostream>

using namespace std;

int main(){
    int n = 4;
    int arr[n] = {5, -2, 3, 4};

    int res = arr[0];

    for (int i = 0; i < n; i++){
        int currMax = arr[i];
        int currSum = arr[i];
        for (int j = 1; j < n; j++){
            int index = (i + j) % n;
            currSum += arr[index];
            currMax = max(currMax, currSum);
        }
        res = max(currMax, res);
    }

    cout << res << endl;
}
