#include <bits/stdc++.h>

using namespace std;

bool checkPangram (string &str){
    int count[26] = {0};    

    for (int i = 0; i < str.length(); i++)
        if (!isupper(str[i]))
            count[str[i] - 'a']++;
        else
            count[str[i] - 'A']++;

    for (int i = 0; i < 26; i++)
        if (count[i] == 0)
            return false;

    return true;
}

int main(){
    string str = "Nymphs blitz quick vex dwarf jog";
    cout << checkPangram(str) << endl;
}
