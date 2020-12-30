#include <iostream>

using namespace std;

int main(){
    int val;
    while (1){
        cin >> val;
        if (val == 42)
            break;
        cout << val << endl;
    }
    return 0;
}
