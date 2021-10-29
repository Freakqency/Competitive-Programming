#include <bits/stdc++.h>

using namespace std;

int main(){
    string str = "aaaaa";

    int count = 0;
    for (int i = 0; i < str.length(); i++)
        for (int j = i + 1; j < str.length(); j++)
            if (str[i] == str[j] && str[i] == str[j + 1]){
                str.insert(j + 1, "M");
                count++;                
            }
            else
                break;

    cout << str << endl;
    cout << count << endl;
}
