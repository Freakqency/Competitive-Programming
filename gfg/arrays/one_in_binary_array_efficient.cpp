#include <iostream>

using namespace std;

int main(){
    int n = 6;
    bool arr[n] = {0, 1, 1, 0, 1, 0};
    int res = 0;
    int curr = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0)
            curr = 0;
        else{
            curr++;
            res = max(res, curr);
        }
    }

    cout << res << endl;
}
