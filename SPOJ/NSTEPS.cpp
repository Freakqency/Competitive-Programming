#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while (n--){
        int x, y; cin >> x >> y;
        int sum = x - y;
        if (sum == 0 || sum == 2){
            if (x % 2 == 0)
                cout << x + y << endl;
            else
                cout << x + y - 1 << endl;
        }
        else
            cout << "No Number" << endl;
    }
    return 0;
}
