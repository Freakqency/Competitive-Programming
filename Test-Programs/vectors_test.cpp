#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> iVal;
    vector<int> jVal;

    for (int i = 0; i < 10; i++){
        iVal.push_back(i);
    }

    int* minVal = min_element(iVal.begin() + 0, *iVal.begin() +3);
    cout << *minVal << endl;
}
