void staircase(int n) {
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            if (j == 0)
                for (int k = 0; k < n-i; k++)
                    cout << " ";
            cout << "#";
        }
        cout << endl;
    }
}
