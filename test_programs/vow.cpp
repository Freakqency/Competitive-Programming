#include <iostream>

using namespace std;

int main(){
    int v = 0;
    int c = 0;
    string s = "a i u e o t m n s w";
    for (int i = 0; i < s.length(); i++){
        if (int (s[i]) >= 65 && int(s[i]) <= 122){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'){
                v++;
            }
            else {
                c++;
            }
        }
    }

    cout << "V:" << v;
    cout << "C:" << c;
}
