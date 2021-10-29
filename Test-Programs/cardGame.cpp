#include <bits/stdc++.h>

using namespace std;

int cardGame(int n){
    vector<int> v1;
    
    for (int i = 1; i < n + 1; i++){
        v1.push_back(i);
    }
    
    int j = 1;
    for (int i = 0; i < n - 1; i+=2){
        if (v1.at(i) > 0){
            v1.at(i) = -1;
        }
        v1.push_back(v1.at(j));
        v1.at(j) = -1;
        j += 2;
    }
    
    int res;
    
    for (int i = 0; i < n; i++){
        if (v1.at(i) > 0){
            res = v1.at(i);
        }
    }
    
    return res;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        cout << cardGame(n) << endl;
    }
}
