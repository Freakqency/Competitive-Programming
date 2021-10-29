#include <bits/stdc++.h>

using namespace std;

int main(){
    int sum = 0;
    int count = 0;
    int arr[] = {1,2,3};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j <= 3; j++){
            for (int k = i;  k < j; k++){
                cout << arr[k];
            }
            cout << "\n";
        }
    }
}
