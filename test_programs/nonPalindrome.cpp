#include <bits/stdc++.h>

using namespace std;

int nonpalindrome(string s1){
    int count = 1;

    for (int i = 1; i < s1.length(); i++){
        if (s1[0] == s1[i]){
            count++;
        }
    }

    cout << count;

}


int main(){
    string s = "aaa";
    nonpalindrome(s);
}
