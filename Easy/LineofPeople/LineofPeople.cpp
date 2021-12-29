int solve(int n, int a, int b) {
    if(n - b >= a)
        return b + 1;
    else
        return n - a;
}