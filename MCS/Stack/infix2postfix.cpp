#include <iostream>
#include <stack>

using namespace std;

bool IsOperator(char c){
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

bool IsOperand(char c){
    if (c >= '0' && c <= '9')
        return true;
    else if (c >= 'a' && c <= 'z')
        return true;
    else if (c >= 'A' && c <= 'Z')
        return true;
    return false;
}

int GetWeight(char op){
    switch (op){
        case '^':
            return 3;
        case '*':
            return 2;
        case '/':
            return 2;
        case '+':
            return 1;
        case '-':
            return 1;
        default:
            cout << "Error";
    }
    return -1;
}

bool HigherPrecedance(char op1, char op2){
    int op1_weight = GetWeight(op1);
    int op2_weight = GetWeight(op2);
    if (op1_weight == op2_weight)
        return true;
    return op1 > op2 ? true : false;
}

string infix_to_postfix(string exp){
    stack<char> st;
    string res;
    for (int i = 0; i < exp.length(); i++){
        if (IsOperator(exp[i])){
            while (!st.empty() && HigherPrecedance(st.top(), exp[i])){
                res += st.top();
                st.pop();
            }
            st.push(exp[i]);
        }
        else if (IsOperand(exp[i])){
            res +=exp[i];
        }
    }
    while (!st.empty()){
        res += st.top();
        st.pop();
    }
    return res;
}

int main(){
    string exp;
    cout << "Please Enter Infix Expression: ";
    getline(cin, exp);
    cout << infix_to_postfix(exp);
    return 0;
}
