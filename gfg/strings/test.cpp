#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> temp;
    for (int i = 0; i < 5; i++) temp.push_back(i);
    temp.erase(temp.begin() + 1);
    for (int i : temp) cout << i << " ";
}
