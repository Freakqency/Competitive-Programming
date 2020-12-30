#include <bits/stdc++.h>

using namespace std;

int get_reversed(int num){
    int rem;
    string out;
    while (num != 0){
        rem = num % 10;
        out += to_string(rem);
        num /= 10;
    }
    return stoi(out);
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int num1, num2; cin >> num1 >> num2;
        int rev1 = get_reversed(num1), rev2 = get_reversed(num2);
        int sum = rev1 + rev2;
        int rev_sum = get_reversed(sum);
        cout << rev_sum << endl;
    }
    return 0;
}
