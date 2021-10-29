#include "gigasecond.h"

namespace gigasecond {
    boost::posix_time::ptime advance(boost::posix_time::ptime pt) {
        pt = pt + boost::posix_time::seconds(1000000000);
        return pt;
    }
}  // namespace gigasecond
