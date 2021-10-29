#include <bits/stdc++.h>

using namespace std;

int main(){
    char s[100] = "i.like.this.program.very.much";
    int n = strlen(s);
    char *token = strtok(s, ".");
    stack<string> st;
    while (token != NULL){
        st.push(token);
        token = strtok(NULL, ".");
    }

    int len = st.size();
    string res;
    for (int i = 0; i < len; i++){
        res += st.top();
        st.pop();
        res += ".";
    }
    
    res.pop_back();
    for (int i = 0; i < n; i++)
        s[i] = res[i];
}
