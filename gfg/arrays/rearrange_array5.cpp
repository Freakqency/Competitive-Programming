#include <iostream>

using namespace std;

int main(){
    int n = 11;
    int arr[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
    int res[n];

    int i = 0, j = n - 1, k = 0;
    while (i <= j){
        res[k++] = arr[j--];
        res[k++] = arr[i++];
    }

    for (int i : res)
        cout << i << " ";
}
