int countZeros(int n) {
    if (n == 0) // Just to handle the case when n=0
        return 1;
    if (n < 10) // this is the actual base case
        return 0;
    else if (n % 10 == 0)
        return 1 + countZeros(n / 10);
    return countZeros(n / 10);
}

