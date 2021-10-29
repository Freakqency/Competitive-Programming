#include <bits/stdc++.h>

using namespace std;

int euclidGCD(int a, int b){
	int dividend = a >= b ? a : b;
	int divisor = a	<= b ? a : b;

	while (divisor != 0) {
		int remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
	}
	
	return dividend;
}

int main(){

cout << euclidGCD(392,27);

}
