#include <iostream>

int get_change(int m) {
  //write your code here
  int num_coins = 0;

  while(m > 0)
  {
    if(m >= 10)
      m -= 10;

    else if(m >= 5)
      m -= 5;

    else
      m -= 1;
    num_coins++;
  }
  
  return num_coins;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
