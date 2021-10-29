#include "difference_of_squares.h"

namespace difference_of_squares {
    int square_of_sum(int n) {
        int res = (n * (n + 1)) / 2;
        return res * res;
    }
    int sum_of_squares(int n) {
        return (n * (n + 1) * ((2 * n) + 1)) / 6;        
    }
    int difference(int n) {
        int num1 = square_of_sum(n);
        int num2 = sum_of_squares(n);
        return num1 - num2;
    }
}  // namespace difference_of_squares
