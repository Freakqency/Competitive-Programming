#include <bits/stdc++.h>

using namespace std;

#define CHAR 256

bool areSame(int arr1[], int arr2[]){
    for (int i = 0; i < CHAR; i++)
        if (arr1[i] != arr2[i])
            return false;
    return true;
}

int main(){
    string txt = "geeksforgeeks";
    string pat = "frog";
    int n = txt.length();
    int m = pat.length();

    int count1[CHAR] = {0};
    int count2[CHAR] = {0};
    for (int i = 0; i < m; i++){
        count1[pat[i]]++;
        count2[txt[i]]++;        
    }

    for (int i = m; i < n; i++){
        if (areSame(count1, count2))
            return true;
        count2[txt[i - m]]--;
        count2[txt[i]]++;
    }

    return false;
}
