#include <iostream>

int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}

int fibonacci_fast(long long n) {
    // // write your code here
    // long long F[n+1] {0};
    // F[0] = 0;
    // F[1] = 1;

    // int i {2};
    // for(i=2; i<=n+1; ++i)
    //     F[i] = F[i-1] + F[i-2]; 

    // int ultimate = F[n+1] % 10;
    // int penultimate = F[n] % 10;

    // int sum_squares_last_digit = ultimate * penultimate;

    // return sum_squares_last_digit;

    if(n <= 1)          // check if the input value is too small
        return n;

    n = n % 60;         // if not, take the mod 60 of the input

    long long prev = 0;       // first value of the fibonacci series
    long long current = 1;    // second value of the fibonacci series

    int i {2};
    for(i=2; i<=n+1;++i)    // iterate until n+1, since we are looking for F_N + F_{N+1}
    {
        prev = current;
        current = prev + current;   // calculate the current fibonacci value
    }

    return (prev + current) % 10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n);
}
