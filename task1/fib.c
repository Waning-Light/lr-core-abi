long long fib(int x) {
    if (x <= 1) {
        return x;
    }
    long long a = 0;
    long long b = 1;
    long long temp;
    
    for (int i = 2; i <= x; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}