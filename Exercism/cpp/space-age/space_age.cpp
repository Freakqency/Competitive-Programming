#include "space_age.h"

namespace space_age {
    long long int space_age::seconds() const {
        return given_seconds;
    }
    double space_age::on_earth() const {
        return given_seconds / earth_year_in_seconds;        
    }
    double space_age::on_mercury() const {
        return on_earth() / mercury_year_in_earth_year;
    }
    double space_age::on_venus() const {
        return on_earth() / venus_year_in_earth_year;
    }
    double space_age::on_mars() const {
        return on_earth() / mars_year_in_earth_year;        
    }
    double space_age::on_jupiter() const {
        return on_earth() / jupiter_year_in_earth_year;
    }
    double space_age::on_saturn() const {
        return on_earth() / saturn_year_in_earth_year;
    }
    double space_age::on_uranus() const {
        return on_earth() / uranus_year_in_earth_year;
    }
    double space_age::on_neptune() const {
        return on_earth() / neptune_year_in_earth_year;
    }
}  // namespace space_age
