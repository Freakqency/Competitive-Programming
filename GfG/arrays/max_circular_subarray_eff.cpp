#include <iostream>

using namespace std;

int normalMaxsum(int arr[], int n){
    int res = arr[0], maxEnding = arr[0];

    for (int i = 1; i < n; i++){
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(maxEnding, res);
    }

    return res;
}

int main(){
    int n = 2;
    int arr[n] = {-5, -3};
    int normal_Maxsum = normalMaxsum(arr, n);

    if (normal_Maxsum < 0){
        cout <<  normal_Maxsum << endl;
        return 0;
    }

    int total_sum = 0;
    for (int i = 0; i < n; i++)
        total_sum += arr[i];

    for (int i = 0; i < n; i++)
        arr[i] = -arr[i];

    int normal_Minsum = normalMaxsum(arr, n);
    int circular_sum = total_sum + normal_Minsum;

    cout << max(normal_Maxsum, circular_sum) << endl;
    return 0;
}
