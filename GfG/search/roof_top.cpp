#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 8;
    int arr[n] = {6, 9, 2, 7, 5, 4, 1, 9};
    int count = 0;
    int temp = 0;
    for(int i = 1; i < n; i++) {        
        if(arr[i] > arr[i - 1])
            temp++;
        else
            temp = 0;
        count = max(count, temp);
    }

    return count;
}
