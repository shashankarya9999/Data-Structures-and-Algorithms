#include <iostream>
#include <vector>
using std::vector;

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}

// you can use the property that the last digit of the sum of 60 consecutive Fibonacci numbers is always 0. 
// This practically means you don't need to sum thousands of numbers, just a part of the first 60 Fibonacci numbers, 
// since adding 60 more will not change the last digit of the sum.

long long get_fibonacci_partial_sum_fast(long long from, long long to) {

    long long sum = 0;

    // simplify the input arguments, as the last digit pattern repeats with a period of 60,
    // and the sum of 60 such consecutive numbers is 0 mod 10
    int m = static_cast<int>(from % 60);   //pisanoLength(10) = 60
    int n = static_cast<int>(to % 60);

    // make sure n is greater than m
    if(n < m)
        n += 60;

    long long current = 0;
    long long next = 1;

    for(int i = 0; i <= n; ++i)
    {
        if(i >= m)
            sum += current;

        long new_current = next;
        next = next + current;
        current = new_current;
    }

    return static_cast<int>(sum % 10);
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_fast(from, to) << '\n';
}
