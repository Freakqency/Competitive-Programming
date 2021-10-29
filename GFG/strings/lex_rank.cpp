#include <bits/stdc++.h>

using namespace std;

// Naive solution
int main(){
    string str = "dcba";
    string strcp = str;
    sort (str.begin(), str.end());
    int count = 0;
    while (strcp != str){
        next_permutation(str.begin(), str.end());
        count++;
    }
    cout << count + 1 << endl;
}
