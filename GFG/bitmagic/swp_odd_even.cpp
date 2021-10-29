#include <bits/stdc++.h>

using namespace std;

unsigned int swapBits(unsigned int n) {
    string bin = bitset<32>(n).to_string();
    int len = bin.length();
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            char temp = bin[i];
            bin[i] = bin[i + 1];
            bin[i + 1] = temp;
        }
    }
    return stoi(bin, 0, 2);
}

unsigned int effswapBits(unsigned int n) {
    unsigned int even_bits = n & 0xAAAAAAAA;
    unsigned int odd_bits = n & 0x55555555;
    even_bits >>= 1;
    odd_bits <<= 1;
    return (even_bits | odd_bits);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    unsigned int n = 23;
    cout << effswapBits(n) << endl;
    return 0;
}
