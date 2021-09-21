#include <bits/stdc++.h>

using namespace std;

#define CHAR 256

int fact(int n){
    int res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int main(){
    string str = "dcba";
    int n = str.length();

    // create count array of characters
    int count[CHAR] = {0};
    for (int i = 0; i < n; i++)
        count[str[i]]++;

    //find cumilative count
    for (int i = 1; i < CHAR; i++)
        count[i] += count[i - 1];

    //compute lexicographically smaller strings
    int mul = fact(n);
    int res = 1;
    for (int i = 0; i < n - 1; i++){
        mul = mul/(n - i);
        res += mul * count[str[i] - 1];
        //reduce all the values to the left of the string by 1
        for (int j = str[i]; j < CHAR; j++)
            count[j]--;        
    }

    cout << res << endl;
}
