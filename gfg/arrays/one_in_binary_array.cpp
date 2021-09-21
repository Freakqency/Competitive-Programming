#include <iostream>

using namespace std;

int main(){
    int n = 6;
    int res = 0;
    bool arr[n] = {0, 1, 1, 0, 1, 0};
    for (int i = 0; i < n; i++){
        int cur = 0;
        for (int j = i; j < n; j++)
            if (arr[j] == 1) 
                cur++;
            else
                break;
        res = max(res, cur);
    }

    cout << res << endl;
}
