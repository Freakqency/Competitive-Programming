#include <bits/stdc++.h>

using namespace std;

int main(){
    string txt = "aabaacaadaabaaba";
    string pat = "aaba";
    int n = txt.size();
    int k = pat.size();

    for (int i = 0; i <= n - k; i++){
        int j;
        for (j = 0; j < k; j++)
            if (pat[j] != txt[i + j])
                break;
        if (j == k)
            cout << "yes" << i << endl;
    }
}
