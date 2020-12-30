#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[256] = {0};
    int count = 0;
    string s1 = "geeksforgeeks";
    string s2 = "geeksforgeekscoursesgeeks";

    for (int i = 0; i < s1.size(); i++){
        arr[s1[i]]++;
    }

    for (int i = 0; i < s2.size(); i++){
        arr[s2[i]]--;
    }

    for (int i = 0; i < 256; i++){
        if (arr[i] != 0){
            count += abs(arr[i]);
        }
    }

    cout << count << endl;
}
