#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 11;
    int start = 0;
    int end = n-1;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
    vector<int> res;

    while (start <= end){
        if (start == end){
            res.push_back(arr[start]);
        }
        res.push_back(arr[end]);
        res.push_back(arr[start]);
        start++;
        end--;
    }

    int x = 0;
    for (auto i = res.begin(); i != res.end(); i++){
        arr[x] = *i;
        x++;
    }

    string s = "24";
    int sum = 0;
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i])){
            sum += stoi(s[i]);
        }
    }

    return 0;
}
