#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 5;
    int arr[n] = {0, -10, 1, 3, -20};

    int max_val = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > max_val)
            max_val = arr[i];

    int hash[max_val];
    for (int i = 0; i < max_val; i++)
        hash[i] = -1;

    for (int i = 0; i < n; i++)
        if (arr[i] > 0)
            hash[arr[i]]++;

    hash[0] = 0;

    for (int i = 0; i < max_val; i++)
        if (hash[i] < 0)
            return i;

   return max_val + 1;
}
