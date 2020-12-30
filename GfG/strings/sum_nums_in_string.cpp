#include <bits/stdc++.h>

using namespace std;

int main(){
    string str = "123abc";
    int sum = 0;
    for (int i = 0; i < str.length(); i++){
        if (isdigit(str[i])){
            string temp = "";
            temp += str[i];
            int j = i + 1;
            while (isdigit(str[j]))
                temp += str[j++];
            sum += stoi(temp);
            i = j;
        }
    }

    cout << sum << endl;
}
