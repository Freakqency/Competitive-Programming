#include <iostream>

using namespace std;

int main(){
    int n;
    while (1){
        cin >> n;
            if (n == 0) break;
        int sum = 0;
        for (int i = 1; i < n+1; i++) sum += i*i;
        cout << sum << endl;
    }
    return 0;
}
