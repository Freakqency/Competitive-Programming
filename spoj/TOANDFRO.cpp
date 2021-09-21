#include <bits/stdc++.h>

using namespace std;

int main(){
    while (1){
        int c; cin >> c;
        if (c == 0) break;
        string code; cin >> code;
        int r = code.length() / c;
        char arr[r][c];
        int k = 0;
        for (int i = 0; i < r; i++){
            if (i % 2 == 0)
                for (int j = 0; j < c; j++)
                    arr[i][j] = code[k++];
            else 
                for (int j = c-1; j >= 0; j--)
                    arr[i][j] = code[k++];
        }
        for (int i = 0; i < c; i++)
            for (int j = 0; j < r; j++)
                cout << arr[j][i];
        cout << endl;
    }
    return 0;
}
