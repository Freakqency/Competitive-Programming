#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    int arr[10];
    for (int i = 0; i < 10; i++){
        v1.push_back(i);
    }

    int* pos = v1.data();

    for (int i = 0; i < 10; i++){
        arr[i] = *pos;
        *pos++;
    }

    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

}
