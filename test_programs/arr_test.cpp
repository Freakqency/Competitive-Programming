#include<iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3};

    for (int i = 0; i < 5; i++){
        cout << arr[i];        
    }
    cout << "\n";

    for (int i = 0; i < 5; i++){
        cout << arr1[i];
    }

    cout << "\n";

    for (int i = 0; i < 3; i++){
        cout << arr2[i];
    }
}
