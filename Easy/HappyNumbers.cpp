bool solve(int n) {
    set<int> checkSum;
    int sum;

    while (true) {
        sum = 0;

        while (n > 0) {
            sum += pow((n % 10), 2);
            n /= 10;
        }

        n = sum;

        if (n == 1)
            break;

        else if (checkSum.find(n) != checkSum.end())
            return false;

        checkSum.insert(n);
    }
    return true;
}