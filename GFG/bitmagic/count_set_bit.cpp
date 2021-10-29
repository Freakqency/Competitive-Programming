#include <bits/stdc++.h>

using namespace std;

int get_set_bits(int n) {
    return __builtin_popcount(n);
}

int count_set_bits(int n) {
    // Iterate the number check if each bit is set or not
    int count = 0;
    while(n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int brainalgo(int n) {
    int count = 0;
    while(n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int nibMethod(int n) {
    int num_to_bits[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};
    int nibble = 0;
    if (n == 0) return num_to_bits[0];
    nibble = n & 0xf; // Get last nibble
    return num_to_bits[nibble] + nibMethod(n >> 4);
} 

int countRange(int n) {
    vector<int> mem(n + 1);
    mem[0] = 0;
    for (int i = 1; i <= n; i++) mem[i] = mem[i / 2] + i % 2;
    int sum = accumulate(mem.begin(), mem.end(), 0);
    return sum;
}

//https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n-set-2/
int effcountRange(int n) {
    n += 1;
    int powtwo = 2, cnt = n / 2;
    while (powtwo < n) {
        int totpairs = n / powtwo;
        cnt += (totpairs / 2) * powtwo;
        cnt += (totpairs & 1) ? n % powtwo : 0;
        powtwo <<= 1;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n = 14;
    cout << effcountRange(n) << endl;
    return 0;
}
