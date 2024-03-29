string dayOfProgrammer(int year) {
    if (year == 1918)
        return "26.09.1918"; // 256-230(Feb only had 15 days in year 1918 due calendar change)
    else if (year < 1918)
        if (year % 4 == 0)
            return "12.09."+to_string(year);
        else
             return "13.09."+to_string(year);             
    else if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        return "12.09."+to_string(year);

    return "13.09."+to_string(year);
}
