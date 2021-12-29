bool solve(int n) {
    vector<int> digit;
    int sum = 0, temp = n, exponent = 0;

    while (temp > 0){
        digit.push_back(temp%10);
        temp /= 10;
        exponent++;
    }

    for(int i = 0; i < exponent; i++){
        sum += pow(digit[i], exponent);

        if(sum > n)
            break;
    }

    return sum == n;
}