#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 5;

    if (x == 1 || x == 0)
        return x;

    long long count = 1;
    long long sqr = 1;
    while (sqr <= x){
        count++;
        sqr = count * count;
    }

    return count - 1;
}
