#include "boost/date_time/posix_time/posix_time.hpp"
#include<boost/date_time/gregorian/gregorian.hpp>
#include<iostream>

using namespace boost::posix_time;
using namespace boost::gregorian;

int main() {
	std::string ts("2002-01-20 23:59:59.000");
	ptime pt(time_from_string(ts));
	pt = pt + seconds(1000000000);
	std::string res = to_simple_string(pt);
	std::cout << res << std::endl;
	return 0;
}
