#include <iostream>

using namespace std;

int power(int a, int b){
    if (b == 0) return 1;
    int tmp = power(a, b / 2);
    int res = tmp * tmp;
    if (b % 2 == 1) res *= a;
    return res;
}

int main(){
    int a = 5, b = 4;
    cout << power(a, b) << endl;
}
