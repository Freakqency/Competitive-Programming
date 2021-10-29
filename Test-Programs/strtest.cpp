#include<bits/stdc++.h>

using namespace std;

bool IsOperator(string x){
    if (x == "+")
    return true ;
    return false;
}

int main(){
    string exp = "+ 4 5";
    vector<string> v1;
    stringstream ss(exp);
    string token;

    while(getline(ss, token, ' ')){
        v1.push_back(token);
    }

    for (int i = 0; i < v1.size(); i++){
        cout << IsOperator(v1.at(i)) << " ";
    }
}
