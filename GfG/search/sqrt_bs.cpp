#include <bits/stdc++.h>

using namespace std;

int main() {
    long x = 6179767;
    long l = 1, h = x/2;
    long ans;
    if (x < 2)
        return x;
    while (l <= h){
        long mid = l + ((h - l) / 2);
        if (mid == x)
            return mid;
        else if (mid*mid < x) {
            l = mid + 1;
            ans = mid;
        }
        else
            h = mid - 1;            
    }
    cout << ans << endl;
}
