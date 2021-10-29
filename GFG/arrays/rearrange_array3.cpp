#include <iostream>

using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1, 3, 4, 2, 0};

    for (int i = 0; i < n; i++)
        arr[arr[i] % n] += i * n;

    for (int i : arr)
        cout << i << " ";
}
