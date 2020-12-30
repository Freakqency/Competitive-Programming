#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1;
    int n = 10;

    for (int i = 1; i< n + 1; i++){
        v1.push_back(i);
    }

    for (int i = 0; i < n; i+=2){
        v1.at(i) = 0;
    }

    for (int i = 0; i < n; i++){
        cout << v1.at(i);
    }
}

