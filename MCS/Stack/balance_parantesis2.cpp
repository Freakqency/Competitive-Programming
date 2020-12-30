#include<iostream>
#include<stack>

using namespace std;

bool check_pair(char open, char close){
    if (open == '[' && close == ']')
        return true;
    else if (open == '(' && close == ')')
        return true;
    else if (open == '{' && close == '}')
        return true;
    return false;
}

bool check_expression(string str){
    stack<char> st;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            st.push(str[i]);
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}'){
            if (st.empty() || !check_pair(st.top(), str[i]))
                return false;
            st.pop();
        }
    }
    return st.empty() ? true:false;
}

int main(){
    string str;
    cout << "Enter the expression to evaluate: ";
    cin >> str;
    cout << check_expression(str);
    return 0;
}
