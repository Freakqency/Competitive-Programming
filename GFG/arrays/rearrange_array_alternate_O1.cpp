#include <iostream>

using namespace std;

int main(){
    int n = 11;
    int arr[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};

    int maxE = arr[n - 1] + 1;
    int minptr = 0, maxptr = n - 1;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0)
            arr[i] += (arr[maxptr--] % maxE) * maxE;
        else
            arr[i] += (arr[minptr++] % maxE) * maxE;        
    }

    for (int i = 0; i < n; i++)
        arr[i] /= maxE;

    for (int i : arr)
        cout << i << " ";
}
