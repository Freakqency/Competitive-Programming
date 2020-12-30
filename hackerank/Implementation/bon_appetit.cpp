void bonAppetit(vector<int> bill, int k, int b) {
    int tot = accumulate(bill.begin(), bill.end(), 0);
    tot -= bill[k];
    int share = tot/2;
    if (share == b)
        cout << "Bon Appetit";
    else
        cout << b-share << endl;
}
