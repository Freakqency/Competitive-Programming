#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "aaabbb";
    string s1 = "";
    string s2 = "";

    if (s.length() % 2 == 0){
        for (int i = 0; i < s.length()/2; i++){
            s1 += s[i];
        }
        for (int i = s.length()/2; i < s.length(); i++){
            s2 +=s[i];
        }
    }

    cout << s1 << endl;
    cout << s2 << endl;
}
