#include<iostream>
#include<stack>

using namespace std;

bool checkpair(char p, char q){
    if (p == '(' && q == ')' )
        return true;
    else if (p == '[' && q == ']')
        return true;
    else if (p == '{' && q == '}')
        return true;
    return false;
}

bool CheckBalanced(string s){
    stack<char> st;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if (st.empty() || !checkpair(st.top(), s[i]))
                return false;
            st.pop();
        }
    }
    return st.empty() ? true:false;
}

int main(){
    string s;
    cout << "Enter the parantesis expression";
    cin >> s;
    cout << CheckBalanced(s);
    return 0;
}
