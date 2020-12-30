#include <bits/stdc++.h>

using namespace std;

vector<int> remove_redundant(int arr[], int n){
    set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(arr[i]);

    vector<int> res;
    for (auto i : st)
        res.push_back(i);

    return res;
}

int main(){
    int n = 85;
    int arr[n] = {-47,1,4,49,-18,10,26,18,-11,-38,-24,36,44,-11,45,20,-16,28,17,-49,47,-48,-33,42,2,6,-49,30,36,-9,15,39,-6,-31,-10,-21,-19,-33,47,21,31,25,-41,-23,17,6,47,3,36,15,-44,33,-31,-26,-22,21,-18,-21,-47,-31,20,18,-42,-35,-10,-1,46,-27,-32,-5,-4,1,-29,5,29,38,14,-22,-9,0,43,-50,-16,14,-26};
    sort (arr, arr + n);
    vector<int> arrMod = remove_redundant(arr, n);

    int missing = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arrMod[i] > 0){
            if (arrMod[i] == 1){
                break;
            }
            else{
                missing = 1;
                break;
            }
        }
    }



    if (missing == INT_MIN){
        for (int i = 0; i < n; i++){
            if (arrMod[i] >= 0){
                if (arrMod[i] + 1 != arrMod[i + 1]){
                    missing = arrMod[i] + 1;
                    break;
                }
            }
        }

        if (missing == INT_MIN){
            missing = arrMod[n - 1] + 1;
            return missing;
        }
    }
    
    cout << missing << endl;
}
