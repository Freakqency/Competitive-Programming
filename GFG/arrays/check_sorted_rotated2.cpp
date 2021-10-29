#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 16;
    int arr[n] = {96, 96, 22, 24, 27, 33, 34, 34, 49, 54, 58, 64, 76, 78, 78, 89};

    set<int> st;
    for (int i = 0; i < n; i++)
        st.insert(arr[i]);

    int N = st.size();
    int arrMod[N], j = 0;
    for (auto i : st)
        arrMod[j++] = i;

    int maxE = arrMod[0], max_idx = 0;
    int minE = arrMod[0], min_idx = 0;
    for (int i = 0; i < N; i++){
        if (arrMod[i] > maxE){
            maxE = arrMod[i];
            max_idx = i;
        }
        if (arrMod[i] < minE){
            minE = arrMod[i];
            min_idx = i;
        }
    }

    if (maxE == n - 1 && minE == 0 || minE == n - 1 && maxE == 0)
        return 2;

    if (max_idx < min_idx){
        int i = min_idx;
        while (i != max_idx){
            int current = arrMod[i];
            int next = (i + 1 == n) ? 0 : arrMod[i + 1];
            if (current > next)
                return 4;
            i = (i == n - 1) ? 0 : i  + 1;
        }
    }

    if (max_idx > min_idx){
        int i = max_idx;
        while (i != min_idx){
            int current = arrMod[i];
            int next = (i + 1 == n) ? 0 : arrMod[i + 1];
            if (current < next)
                return 5;
            i = (i == n - 1) ? 0 : i + 1;
        }
    }

    return 1;
}
