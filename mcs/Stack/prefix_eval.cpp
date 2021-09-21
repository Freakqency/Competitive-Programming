#include <iostream>
#include <stack>

using namespace std;

bool IsOperator(char x){
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return true;
    return false;
}

bool IsDigit(char x){
    if (x >= '0' && x <= '9')
        return true;
    return false;
}

int PerformOperation(char x, int op1, int op2){
    switch(x){
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
        default:
            cout << "error";
    }
    return 1;
}

int PrefixEval(string exp){
    stack<int> st;
    for (int i = exp.size() - 1; i >= 0; i--){
        if (exp[i] == ' ' || exp[i] == ',')
            continue;
        else if (IsOperator(exp[i])){
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            int res = PerformOperation(exp[i], op1, op2);
            st.push(res);
            cout << "res" << res << endl;
        }
        else if (IsDigit(exp[i])){
            int op = exp[i] - '0';
            cout << "pushing: " <<op <<endl;
            st.push(op);
        }
    }
    return st.top();
}

int main(){
    string exp;
    cout << "Please enter the expression: ";
    getline(cin, exp);
    cout << PrefixEval(exp) << endl;
    return 0;
}
