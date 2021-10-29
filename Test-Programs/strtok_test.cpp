#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "+ 10 20";
    stringstream check1(s);
    string temp;
    while (getline(check1, temp, ' ')){
        cout << temp << "\n";
    }
}
