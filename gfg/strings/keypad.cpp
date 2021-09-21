#include <bits/stdc++.h>

using namespace std;

string printNumber(string s, int n) {
    string res;
    for (int i = 0; i < n; i++){
        if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
            res += to_string(2);
        else if (s[i] == 'd' || s[i] == 'e' || s[i] == 'f')
            res += to_string(3);
        else if (s[i] == 'g' || s[i] == 'h' || s[i] == 'i')
            res += to_string(4);
        else if (s[i] == 'j' || s[i] == 'k' || s[i] == 'l')
            res += to_string(5);
        else if (s[i] == 'm' || s[i] == 'n' || s[i] == 'o')
            res += to_string(6);
        else if (s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's')
            res += to_string(7);
        else if (s[i] == 't' || s[i] == 'u' || s[i] == 'v')
            res += to_string(8);
        else if (s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
            res += to_string(9);
    }
    
    return res;
}

int main(){
    string str = "hqghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvs";
    int n = str.length();
    cout << printNumber(str, n) << endl;
}
