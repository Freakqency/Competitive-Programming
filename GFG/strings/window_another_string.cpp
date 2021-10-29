#include <bits/stdc++.h>

using namespace std;

#define CHAR 256

bool isSame(int arr1[], int arr2[]){
    for (int i = 0; i < CHAR; i++)
        if (arr1[i] != arr2[i])
            return false;
    return true;
}

int main(){
    string txt = "timetopractice";
    string pat = "toc";
    int n = txt.length();
    int m = pat.length();

    int pat_count[CHAR] = {0};
    int txt_count[CHAR] = {0};
    for (int i = 0; i < m; i++){
        pat_count[pat[i]]++;
        txt_count[txt[i]]++;
    }


    for (int i = m; i < n; i++){
        if (isSame(pat_count, txt_count))
            return true;
        txt_count[txt[i - m]]--;
        txt_count[txt[i]]++;
    }

    return false;
}
