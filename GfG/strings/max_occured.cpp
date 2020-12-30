#include <bits/stdc++.h>

using namespace std;

char getMaxOccuringChar(char* str){
    const int MAX_CHAR = 256;
    int count[MAX_CHAR] = {0};
    int n = strlen(str);
    
    for (int i = 0; i < n; i++)
        count[str[i]]++;
    
    int res_val = INT_MIN;
    char res = 'z';
    for (int i = 0; i < MAX_CHAR; i++){
        if (count[i] > res_val){
            res_val = count[i];
            res = (char) i;
        }
        else if (count[i] == res_val){
            if (res > (char) i){
                res = (char) i;
            }
        }
    }
    
    return res;
}

int main(){
    char str[100] = "testsample\0";
    cout << getMaxOccuringChar(str) << endl;
}
