#include "isogram.h"

namespace isogram {
    bool is_isogram(std::string str) {
        if (str.empty())
            return true;
        int hash[256] = {0};
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        str.erase(remove(str.begin(), str.end(), '-'), str.end());
        for (int i = 0; i <(int) str.length(); i++) {
            hash[(unsigned char) str[i]]++;
        }
        for (int i = 0; i < 256; i++) {
            if (hash[i] > 1)
                return false;
        }
        return true;
    }
}  // namespace isogram
