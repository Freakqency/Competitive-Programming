#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> P;
    int arr[]= {1,2,3,4,5};
    int N = 5;
    int K = 5;
    int Q = 2;

    int* il;
    int j = 0;
    for (int i = K; i < N + 1; i+=K){
        il = max_element(arr +j, arr+i);
        cout << *il << endl;
        j +=K;
    }

}
