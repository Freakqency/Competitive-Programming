#include <iostream>

using namespace std;

int power(int a, int b){
    int res = 1;
    while (b > 0){
        if (b % 2 == 1) res *= a;
        a *= a;
        b /= 2;
    }

    return res;
}

int main(){
    int a = 5, b = 4;
    cout << power(a, b) << endl;
}
