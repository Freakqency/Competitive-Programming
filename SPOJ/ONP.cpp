#include <bits/stdc++.h>

using namespace std;

bool opr(char op){
    if (op == '*' || op == '+' || op == '/' || op == '-' || op == '^') return true;
    return false;
}

int main(){
    int t; cin >> t;
    while (t--){
        string str; cin >> str;
        stack<char> st;
        string result;
        for (int i = 0; i < str.length(); i++){
            if (str[i] == '(') continue;
            if (opr(str[i])) st.push(str[i]);
            else if (str[i] == ')'){
                result += st.top();
                st.pop();
            }
            else result += str[i];
        }
        cout << result << endl;
    }
    return 0;
}
