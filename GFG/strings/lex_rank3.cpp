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

    int count[CHAR] = {0};
    for (int i = 0; i < n; i++)
        count[str[i]]++;

    for (int i = 1; i < CHAR; i++)
        count[i] += count[i - 1];

    int res = 1;
    int mul = fact(n);
    for (int i = 0; i < n - 1; i++){
        mul = mul/(n - i);
        res += mul * count[str[i] - 1];
        for (int j = str[i]; j < CHAR; j++)
            count[j]--;        
    }

    cout << res << endl;
}
