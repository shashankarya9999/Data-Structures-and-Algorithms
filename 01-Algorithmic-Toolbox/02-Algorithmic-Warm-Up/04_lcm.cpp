#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long lcm_fast(int a, int b)
{
  if(b==0)
    return a;

  long long a_ = a % b;

  long long gcd {};
  gcd = lcm_fast(b,a_);

  long long lcm {};
  lcm = (a * b)/gcd;

  return (long long) lcm;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  // std::cout << lcm_naive(a, b) << std::endl;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
