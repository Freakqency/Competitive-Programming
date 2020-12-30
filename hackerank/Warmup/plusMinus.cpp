void plusMinus(vector<int> arr) {
    double pcount = 0, ncount = 0, zcount = 0;
    double p_val, n_val, z_val;
    double n = arr.size();

    for (int i = 0; i < n; i++){
        if (arr[i] > 0)
            pcount++;
        else if (arr[i] < 0)
            ncount++;
        else
            zcount++;
    }

    p_val = pcount/n;
    n_val = ncount/n;
    z_val = zcount/n;

    printf("%0.06f\n%0.06f\n%0.06f",p_val, n_val, z_val);
}
