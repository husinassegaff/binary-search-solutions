bool solve(int n) {
    if (n <= 1) 
        return true;
    int l = 1, r = n / 2;
    long long m = 0;

    while (l <= r) {
        m = l + (r - l) / 2;
        if (m * m == n) 
            return true;
        else if (m * m < n)
            l = m + 1;
        else 
            r = m - 1;

    }
    return false;
}