#include <bits/stdc++.h>

using namespace std;

int get_sum(int n, int sum){
    if (n == 0) return sum;
    sum = sum + n;
    return get_sum(n - 1, sum);
}

int get_sum_eff(int n){
    if (n == 0) return 0;
    return n + get_sum_eff(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n = 100;
    cout << "my sum:" << get_sum(n, 0) << endl; 
    cout << "eff sum:" << get_sum_eff(n) << endl; 
    cout << "org:" << (n * (n + 1))/2 << endl;
    return 0;
}
