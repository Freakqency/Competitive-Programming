#include <iostream>

using namespace std;

int main(){
    int N = 42;

    for (int i = 2; i < N; i++){
        if (i % N == 0){
            cout << false << endl;
            return 0;
        }
    }

    cout << true << endl;
    return 0;
}
