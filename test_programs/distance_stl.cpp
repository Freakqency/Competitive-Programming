#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator first = v1.begin();
    vector<int>::iterator last = v1.begin() + 6;
    int dist = distance(first, last);
    cout << dist << endl;
}
