#include <iostream>

using namespace std;

int main(){
    int n = 5, res = 0, arr[] = {3, 0, 1, 2, 5};

    for (int i = 1; i < n - 1; i++){

        int lmax = arr[i];
        for (int j = 0; j < i; j++)
            lmax = max(lmax, arr[j]);

        int rmax = arr[i];
        for (int j = i + 1; j < n; j++)
            rmax = max(rmax, arr[j]);

        res += min(lmax, rmax) - arr[i];
    }

    cout << res << endl;
}
