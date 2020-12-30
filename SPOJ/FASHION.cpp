#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> men;
        vector<int> women;
        for (int i = 0; i < n; i++){
            int temp; cin >> temp;
            men.push_back(temp);
        }
        for (int i = 0; i < n; i++){
            int temp; cin >> temp;
            women.push_back(temp);
        }
        sort(men.begin(), men.end());
        sort(women.begin(), women.end());
        int sum = 0;

        for (int i = 0; i < n; i++){
            sum += men[i] * women[i];
        }

        cout << sum << endl;
    }
    return 0;
}
