#include<iostream>
#include<stack>

using namespace std;

string reverse_string(string s){
    stack <char> st;
    for (int i = 0; i < s.length(); i++)
        st.push(s[i]);
    for (int i = 0; i < s.length(); i++){
        s[i] = st.top();
        st.pop();
    }

    return s;
}

int main(){
    string s;
    cout << "Please enter the string to reverse: ";
    cin >> s;
    cout << reverse_string(s);
    return 0;
}
