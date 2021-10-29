#include <iostream>

using namespace std;

int main(){
    int n = 7;
    int arr[] = {-5, 1, -2, 3, -1, 2, -2};
    int res = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < n; i++){
        maxEnding = max (maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }

    cout << res << endl;
}
