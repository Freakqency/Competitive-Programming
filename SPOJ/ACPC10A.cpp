#include <bits/stdc++.h>

using namespace std;

int main(){
    while (1){
        float n1, n2, n3;
        float ap = 0, gp = 0;
        cin >> n1 >> n2 >> n3;
        if (n1 == 0 && n2 == 0 && n3 == 0) break;
        if (2 * n2 == n1 + n3){
            float d = n2 - n1;
            ap = n3 + d;
            cout << "AP " << ap << endl;
        }
        else {
            float r = n2 / n1;
            gp = n3 * r;
            cout << "GP " << gp << endl;
        }
    }
    return 0;
}
