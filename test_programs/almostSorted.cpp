#include<bits/stdc++.h>

using namespace std;

bool checkSorted(vector<int> v1,int arr[]){
    for (int i = 0; i < v1.size(); i++){
        if (arr[i] != v1.at(i)){
            return false;
        }
    }

    return true;
}

int main(){
    vector<int> v1{1,2,4,3,5,6};
    int n = v1.size();
    int arr[n];

    for (int i = 0; i < n; i++){
        arr[i] = v1.at(i);
    }

    sort (v1.begin(), v1.end());

    int j;
    for (j = 0; j < n; j++){
        if (arr[j] != v1.at(j)){
            break;
        }
    }

    cout << j;
}
