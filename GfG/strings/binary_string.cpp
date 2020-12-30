#include <bits/stdc++.h>

using namespace std;

int main(){
    string txt = "00100101";
    int n = txt.size();
    int flag = 0;
    long count = 0;
    for (int i = 0; i < n; i++){
        if (txt[i] == '1'){
            for (int j = i + 1; j < n; j++){
                if (txt[j] == '1'){
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}
