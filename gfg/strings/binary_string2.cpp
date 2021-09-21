#include <bits/stdc++.h>

using namespace std;

int main(){
    string txt = "01101";
    int n = txt.size();
    long count = 0;
    for (int i = 0; i < n; i++)
        if (txt[i] == '1')
            count++;

    int res = (count * (count - 1)) / 2;
    cout << res << endl;
}
