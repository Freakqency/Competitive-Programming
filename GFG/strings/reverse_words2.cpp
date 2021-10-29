#include <bits/stdc++.h>

using namespace std;

int main(){
    int start = 0;
    string str = "i.like.this.program.very.much";

    for (int i = 0; i < str.length(); i++)
        if (str[i] == '.'){
            reverse(str.begin() + start, str.begin() + i);
            start = i + 1;
        }

    reverse (str.begin() + start, str.end());
    reverse (str.begin(), str.end());

    cout << str << endl;
}
