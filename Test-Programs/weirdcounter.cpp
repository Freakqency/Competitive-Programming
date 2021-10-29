#include <bits/stdc++.h>

using namespace std;

int main(){
    long rem = 3;
    long t = 17;
    while (t > rem ){
        cout << "T val Before:" << t << endl;
        t = t - rem;
        cout << "T val :" << t << endl;
        cout << "Rem Before" << rem << endl;
        rem = rem *2;
        cout << "Rem after" << rem << endl;
    }
    cout << rem-t+1<< endl;
}
