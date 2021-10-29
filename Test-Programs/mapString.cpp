#include<bits/stdc++.h>

using namespace std;

int main(){
    map<char, int> mp;
    string s = "aaabbbb";

    for (int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }

    for (auto i : mp){
        if (i.second % 2 > 0){
            cout << i.first << ":" << i.second;
        }

    }
}
