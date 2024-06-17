#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long gcd_fast(long long a, long long b)
{
  long long x = std::max(a,b);
  long long y = std::min(a,b);
  
  if(y==0)
    return x;
  else
  {
    long long x_ = x % y;

    return gcd_fast(y,x_);
  }
}

long long lcm_fast(long long a, long long b)
{
  long long gcd {};
  gcd = gcd_fast(a,b);

  long long lcm {};
  lcm = (a*b)/gcd;

  return lcm;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  // std::cout << lcm_naive(a, b) << std::endl;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
