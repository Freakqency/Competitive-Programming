#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 25;

    for (int i = 2; i <= n; i++){
        int flag = 0;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0)
                flag = 1;
        }
        if (!flag)
            cout << i << " ";
    }
}
