#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

// The idea is to notice that the last digits of fibonacci numbers also occur in sequences of length 60 (from the previous problem: since pisano peiod of 10 is 60). 
// Irrespective of how large n is, its last digit is going to have appeared somewhere within the sequence. Two Things apart from edge case of 10 as last digit.
//      Sum of nth Fibonacci series = F(n+2) -1
//      Then pisano period of module 10 = let n+2 mod (60) = m then find F(m) mod(10)-1

int fibonacci_sum_fast(long long n)
{
    n = (n + 2) % 60;
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;

    int res = 1;
    for(int i = 2; i <= n; ++i)
        fib[i] = (fib[i-1] % 10 + fib[i-2] % 10) % 10;
    
    if(fib[n] == 0)
        return 9;

    return (fib[n] % 10 - 1);
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_fast(n);
}
