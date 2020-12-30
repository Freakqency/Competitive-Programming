#include <bits/stdc++.h>

using namespace std;

string Game(string s){
    int arr[256] = {0};
    int count = 0;
    
    for (int i = 0; i < s.length(); i++){
        arr[s[i]]++;
    }
    
    for (int i = 0; i < 256; i++){
        if (arr[i] > 0){
            arr[i] = 0;
            count++;
        }
    }
    
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s; 
        cout << Game(s) << endl;
    }
    
    return 0;
}

