#include <bits/stdc++.h>

using namespace std;

int main(){
    string str = "1abc2x30yz67";
    int sum = 0;
    string temp = "";
    for (char ch : str){
        if (isdigit(ch))
            temp += ch;
        else{
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    sum += atoi(temp.c_str());
    cout << sum << endl;
}
