#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "Hello World";
    string::iterator end_pos = remove(s.begin(), s.end(), ' ');
    s.erase(end_pos, s.end());
    cout << s << endl;
}
