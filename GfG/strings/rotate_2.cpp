#include <bits/stdc++.h>

using namespace std;

void leftrotate(string &s, int d){
    reverse(s.begin(), s.begin() + d);
    reverse(s.begin() + d, s.end());
    reverse(s.begin(), s.end());
}

bool isRotated(string str1, string str2){
    string str1cp = str1;
    
    leftrotate(str1, 2);
    if (str1 == str2)
        return true;
    leftrotate(str1cp, str1.length() - 2);
    if (str1cp == str2)
        return true;
        
    return false;
}

int main(){
    string str1 = "amazon";
    int n = str1.length();
    string anticlock = str1.substr(2) + str1.substr(0 , 2);
    string clock = str1.substr(n - 2, 2) + str1.substr(0, n - 2);
    cout << str1 << endl;
    cout << anticlock << endl;
    cout << clock << endl;
}
