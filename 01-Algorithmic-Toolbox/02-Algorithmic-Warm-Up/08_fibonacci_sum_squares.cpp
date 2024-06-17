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
    // write your code here
    long long F[n+1] {0};
    F[0] = 0;
    F[1] = 1;

    int i {2};
    for(i=2; i<=n+1; ++i)
        F[i] = F[i-1] + F[i-2]; 

    return ((F[n]%10)*(F[n+1]%10)) % 10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n);
}
