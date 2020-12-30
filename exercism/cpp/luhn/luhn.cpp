#include "luhn.h"

namespace luhn {
    bool valid(std::string str) {
        std::string::iterator end_pos = remove(str.begin(), str.end(), ' ');
        str.erase(end_pos, str.end());
        int n = str.length();
        if (n <= 1)
            return false;
        std::reverse(str.begin(), str.end());
        for (int i = 0; i < n; i++)
            if (!(str[i] >= 48 && str[i] <= 57))
                return false;
        int sum_val = 0;
        for (int i = 0; i < n; i++)
            if (i % 2 != 0) {
                int doubled_val = 2 * (str[i] - '0');
                if (doubled_val > 9)
                    doubled_val -= 9;
                sum_val += doubled_val;
            } else {
                sum_val += str[i] - '0';
            }
        if (sum_val % 10 == 0)
            return true;
        return false;
    }
}  // namespace luhn
