int countingValleys(int n, string s) {
    int valley = 0;
    for (int i = 0; i < n; i++) {        
        if (s[i] == 'U') {
            int count = 1;
            for (int j = i+1; j < n; j++) {
                if (s[j] == 'U')
                    count++;
                else if (s[j] == 'D')
                    count--;
                if (count == 0) {
                    i = j;                       
                    break;
                }
            }            
        } else {
            int count = -1;
            for (int j = i+1; j < n; j++) {
                if (s[j] == 'U')
                    count++;
                else if (s[j] == 'D')
                    count--;
                if (count == 0) {                    
                    valley++;
                    i = j;
                    break;
                }                                    
            }
        }
    }
    return valley;
}
// Efficient sol
/* int countingValleys(int n, string s) { */
/*     int count = 0; */
/*     int res = 0; */
/*     for (int i = 0; i < n; i++) { */
/*         if (s[i] == 'D') */
/*             count--; */
/*         else { */
/*             count++; */
/*             if (count == 0) */
/*                 res++; */
/*         } */
/*     } */
/*     return res; */
/* } */
