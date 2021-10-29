#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 9;
    int arr[n] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int Lmin[n], Rmax[n];

    Lmin[0] = arr[0];
    for (int i = 1; i < n; i++)
        Lmin[i] = min(arr[i], Lmin[i - 1]);

    Rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        Rmax[i] = max(arr[i], Rmax[i + 1]);

    int i = 0, j = 0, max_idx = 0;
    while (i < n && j < n){
        if (Lmin[i] < Rmax[j]){
            max_idx = max(max_idx, j - i);
            j++;
        }
        else
            i++;
    }

    cout << max_idx << endl;
}
