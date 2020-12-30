
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin >> str;
    cin >> n;
    for (int i=0;i<str.length();i++){
        if( int(str[i])>= 48 && int(str[i])<=57 || int(str[i] >=65 && int(str[i]) <= 90 || int(str[i]) >= 97 && int(str[i]) <=122 )){
            switch(int(str[i])){
                case(87):
                str[i]=char(65);
                break;
                case(88):
                str[i]=char(66);
                break;
                case(89):
                str[i]=char(67);
                break;
                case(90):
                str[i]=char(68);
                break;
                case(119):
                str[i]=char(97);
                break;
                case(120):
                str[i]=char(98);
                break;
                case(121):
                str[i]=char(99);
                break;
                case(122):
                str[i]=char(100);
                break;
                case(54):
                str[i]=char(48);
                break;
                case(55):
                str[i]=char(49);
                break;
                case(56):
                str[i]=char(50);
                break;
                case(57):
                str[i]=char(51);
                break;
                default:
                int ascii=int(str[i]) +n;
                str[i] = char(ascii);   
                break;
            }
        }
    }
    cout << str;
    return 0;
}