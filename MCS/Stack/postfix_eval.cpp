#include<iostream>
#include<stack>

using namespace std;

bool IsNumericDigit(char c){
    if (c >= '0' && c <= '9')
        return true;
    return false;
}

bool IsOperator(char c){
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

int PerformOperation(char x, int op1, int op2){
    if (x == '+')
        return op1 + op2;
    else if (x == '-')
        return op1 - op2;
    else if (x == '*')
        return op1 * op2;
    else if (x == '/')
        return op1 / op2;
}

int PostEval(string s){
    stack<int> st;
    for (int i = 0; i < s.length(); i++){
        if (IsOperator(s[i])){
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            int res = PerformOperation(s[i], op1, op2);
            st.push(res);
        }
        else if (IsNumericDigit(s[i])){
            int op = 0;
            while (i < s.length() && IsNumericDigit(s[i])){
                op = (op * 10) + (s[i] - '0');
                i++;
            }
            i--;
            st.push(op);
        }
    }
    return st.top();
}

int main(){
    string s;
    cout << "Enter PostFix Expression: ";
    getline(cin, s);
    cout << PostEval(s);
    return 0;
}
