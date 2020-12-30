//Optimized Solution
int get_lcm(vector<int> a){
    int lcm = a[0];
    for (int i = 1; i < a.size(); i++){
        int gcd = __gcd(lcm, a[i]);
        lcm = lcm*a[i]/gcd;
    }
    return lcm;    
}

int get_gcd(vector<int> a){
    int gcd = a[0];
    for (int i = 1; i < a.size(); i++){
        gcd = __gcd(gcd, a[i]);
    }
    return gcd;
}

int getTotalX(vector<int> a, vector<int> b) {
    int LCM = get_lcm(a);
    int GCD = get_gcd(b);
    if (GCD%LCM != 0)
        return 0;
    int count = 1;
    for (int i = LCM; i < GCD; i++)
        if (GCD%i == 0 && i%LCM == 0)
            count++;
    return count;
}

/** BruteForce Solution
int getTotalX(vector<int> a, vector<int> b) {
    int count = 0;

    for (int i = 1; i <= 100; i++){
        int f = 1;
        for (int j = 0; j < a.size(); j++)
            if (i % a[j] != 0)
                f = 0;
        for (int j = 0; j < b.size(); j++)
            if (b[j] % i != 0)
                f = 0;
        if (f == 1)
            count++;
    }
    
    return count;
}
**/
