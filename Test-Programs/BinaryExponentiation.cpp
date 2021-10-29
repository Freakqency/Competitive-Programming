#include <iostream>

using namespace std;

int power(int a, int b){
    if (b == 0) return 1;
    int tmp = power(a, b / 2);
    cout << "tmp:" <<tmp << endl;
    int res = tmp * tmp;
    cout << "res:" << res << endl;
    if (b % 2 == 1) res *= a;
    cout << "returned res" << res << endl;
    return res;
}

int main(){
    int a = 3;
    int b = 5;
    cout << power(3, 5) << endl;
}
