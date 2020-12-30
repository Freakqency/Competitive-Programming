#include "triangle.h"

namespace triangle {
    struct float_compare {
        bool almost_equal(double a, double b, double epsilon) {
            if (a == b)
                return true;
            const double diff = std::abs(a - b);
            if (a == 0 || b == 0 || diff < std::numeric_limits<double>::min())
                return diff < epsilon * std::numeric_limits<double>::min();
            else
                return diff < epsilon * std::min(
                        std::abs(a) + std::abs(b),
                        std::numeric_limits<double>::max());
        }
    };
    flavor kind(double side1, double side2, double side3) {
        std::set<double, float_compare> sides{side1, side2, side3};
        double minimum_side = *sides.begin();
        double maximum_side = *sides.rbegin();
        if (minimum_side <= 0)
            throw std::domain_error("side cannot be zero or negative");
        if ((2 * maximum_side >= side1 + side2 + side3))
            throw std::domain_error("violation of triangle property");
        if (sides.size() == 1)
            return flavor::equilateral;
        else if (sides.size() == 2)
            return flavor::isosceles;
        return flavor::scalene;
    }
}  // namespace triangle
