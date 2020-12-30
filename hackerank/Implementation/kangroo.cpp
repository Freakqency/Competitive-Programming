//Mathematical approach
string kangaroo(int x1, int v1, int x2, int v2) {
    if (v2 >= v1)
        return "NO";

    if ((x2-x1)%(v1-v2) == 0)
        return "YES";
    else
        return "NO";
}

//Bruteforce
string kangaroo(int x1, int v1, int x2, int v2) {
    int k1_count = 0;
    int k2_count = 0;
    while (x1 < 50000000){
        if (x1 == x2  && k1_count == k2_count)
            return "YES";
        x1 += v1;
        k1_count++;
        x2 += v2;
        k2_count++;
    }

    return "NO";
}
