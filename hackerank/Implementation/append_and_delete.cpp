string appendAndDelete(string s, string t, int k) {
    int count = distance(s.begin(), mismatch(s.begin(), s.end(), t.begin()).first);
    /*
        The above line converts to
        int count = 0;
        for (int i = 0; i < min(s.length(), t.length(); i++){
            if (s[i] == t[i])
                count++;
            else
                break;
        }
    */
    int diff = s.length() + t.length() - 2 * count;
    if (diff <= k && diff % 2 == k % 2 || s.length() + t.length() <= k)
        return "Yes";

    return "No";
}
