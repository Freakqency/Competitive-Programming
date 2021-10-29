#include <bits/stdc++.h>

using namespace std;

int main(){
    while (1){
        int n; cin >> n;
        if (n == -1)
            break;
        vector<int> arr;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if (sum % n != 0)
            cout << "-1" << endl;
        else{
            int val = sum / n;
            int count = 0;
            for (int i = 0; i < arr.size(); i++){
                if (val - arr[i] < 0){
                    count += val - arr[i];
                }
            }
            cout << abs(count) << endl;
        }

    }
    return 0;
}
