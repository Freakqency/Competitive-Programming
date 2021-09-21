#include <bits/stdc++.h>

using namespace std;

#define COUNT 256

int main(){
    string str1 = "aab";
    string str2 = "xyy";
    int count1[COUNT] = {0};
    int count2[COUNT] = {0};

    if (str1.length() != str2.length())
        return false;

    for (int i = 0; i < str1.length(); i++){
        count1[str1[i]] = (int) str2[i];
        count2[str2[i]] = (int) str1[i];
    }

    for (int i = 0; i < str1.length(); i++)
        if (count1[str1[i]] != (int) str2[i] || count2[str2[i]] != (int) str1[i])
            return false;
    
    return true;
}
