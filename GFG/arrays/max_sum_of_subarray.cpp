#include <iostream>

using namespace std;

int main(){
    int n = 3;
    int arr[n] = {-6, -1, -8};
    int res = arr[0];

    for (int i = 0; i < n; i++){
        int curr = 0;
        for (int j = i; j < n; j++){
            curr += arr[j];
            res = max(res, curr);
        }
    }

    cout << res << endl;
}
