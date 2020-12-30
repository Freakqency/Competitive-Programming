#include <iostream>
#include <stack>

using namespace std;

bool IsOperator(char x){
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
        return true;
    return false;
}

bool IsOperand(char x){
    if (x >= '0' && x <= '9')
        return true;
    else if (x >= 'a' && x <= 'z')
        return true;
    else if (x >= 'A' && x <= 'Z')
        return true;
    return false;
}

int GetWeight(char x){
    switch (x){
        case '+':
            return 1;
        case '-':
            return 1;
        case '*':
            return 2;
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            cout << "Error";
    }
    return -1;
}

bool Has_Higher_Precedance(char op1, char op2){
    int op1_weight = GetWeight(op1);
    int op2_weight = GetWeight(op2);
    if (op1_weight == op2_weight)
        return true;
    return op1_weight > op2_weight ? true : false;
}

string Infix_to_Postfix(string exp){
    stack<char> st;
    string res;
    for (int i = 0; i < exp.length(); i++){
        if (exp[i] == ' ' || exp[i] == ',')
            continue;
        else if (IsOperand(exp[i]))
            res += exp[i];
        else if (IsOperator(exp[i])){
            while (!st.empty() && st.top() != '('  && Has_Higher_Precedance(st.top(), exp[i])){
                res += st.top();
                st.pop();
            }
            st.push(exp[i]);
        }
        else if (exp[i] == '(')
            st.push(exp[i]);
        else if (exp[i] == ')'){
            while (!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop();
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
    cout << Infix_to_Postfix(exp);
    return 0;
}
