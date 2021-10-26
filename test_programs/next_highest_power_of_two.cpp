#include <iostream> 

using namespace std;

int main() {
    int n = 10;
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n++;
    cout << n << '\n';
}

