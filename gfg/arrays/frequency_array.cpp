#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 5;
    int arr[n] = {2, 3, 2, 3, 5};
    int hash[n + 1] = {0};

    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    for (int i = 0; i < n; i++)
        arr[i] = 0;

    for (int i = 0; i < n; i++)
        arr[i - 1]  = hash[i];

    for (int i : arr)
        cout << i << " ";
}
