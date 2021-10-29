#include <bits/stdc++.h>

using namespace std;
int main(){
    int n = 6;
    int arr[n] = {3, 3, 2, 2, 3, 2};
    int res = 0, count = 1;
// moores voting algorithm
    for (int i = 1; i < n; i++){
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count == 0){
            res = i;
            count = 1;
        }
    }
    count = 0;
// needed only to check if selected candidate is majority    
    for (int i = 0; i < n; i++)
        if (arr[res] == arr[i])
            count++;
    if (count <= n / 2)
        res = -1;

    cout << res << endl;
}
