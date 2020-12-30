#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> ar{10,20,20,10,10,30,50,10,20};
    int n = 9;
    int arr[100] = {0};
    int res = 0;
    map<int,int> mp;
    
    for (auto i = ar.begin(); i != ar.end(); i++){
        arr[*i]++;
    }

    for (auto i = ar.begin(); i != ar.end(); i++){
        mp[*i]++;
    }

    for (auto i : mp){
        res += i.second/2;
    }

    cout << res;

}
