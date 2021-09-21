#include <iostream>

using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    for (int i = 1; i < n; i++){
        if (i % 2 != 0){
            if (arr[i] > arr[i - 1])
                swap(arr[i], arr[i - 1]);
            else if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
    }

    for (int i : arr)
        cout << i << " ";
}
