string timeConversion(string s) {
    int hh, mm, ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');        
    if (hh < 12 && s[8] == 'P')
        hh += 12; 
    if (hh == 12 && s[8] == 'A')
        hh = 0;
        
    char result[10];
    sprintf(result, "%02d:%02d:%02d", hh, mm, ss);

    return result;
}
