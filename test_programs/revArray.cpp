#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    reverse (arr +2, arr +5);
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}
