#include <iostream>

int get_change(int m) {
  
  
  
  return m / 4;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
