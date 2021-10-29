#include "hamming.h"

namespace hamming {
    int compute(std::string str1, std::string str2) {
        if (str1.length() != str2.length())
            throw std::domain_error("length not same");
        int res = 0;
        for (int i = 0; i <(int) str1.length(); i++) 
            if (str1[i] != str2[i])
                res++;
        return res;
    }
}  // namespace hamming
