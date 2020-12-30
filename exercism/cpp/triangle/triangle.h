#if !defined(TRIANGLE_H)
#define TRIANGLE_H
#include<set>
#include<stdexcept>
#include<limits>

namespace triangle {
    enum class flavor {
        scalene,
        isosceles,
        equilateral
    };

    flavor kind(double side1, double side2, double side3);
}  // namespace triangle

#endif // TRIANGLE_H
