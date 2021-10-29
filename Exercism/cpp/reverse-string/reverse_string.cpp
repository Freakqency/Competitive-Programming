#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string str) {
        std::string res(str.rbegin(), str.rend());
        return res;
    }
}  // namespace reverse_string
