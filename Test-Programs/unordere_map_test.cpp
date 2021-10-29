#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int,int>hash;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,15};
    for (int i = 0; i < 16; i++){
        hash[arr[i]]++;
    }

    for (int i = 0; i < 15; i++){
        cout << hash[i];
    }

}
