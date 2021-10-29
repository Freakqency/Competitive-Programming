#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1 = "aabbcc";
    string s2 = "bbccaak";
    int arr[256] = {0};

    for (int i = 0; i < s1.length(); i++){
        arr[s1[i]]++;
    }


    for (int i = 0; i < s2.length(); i++){
        arr[s2[i]]--;
    }

    int sum = 0;
    for (int i = 0; i < 256; i++){
        sum += arr[i];
    }

    cout << sum;
}
