#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[10] = {5,2,3,1,4,8,6,7,9,0};

    sort (arr, arr + 10);

    for (int i = 0; i < 10; i++){
        cout << arr[i];
    }
}
