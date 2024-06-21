#include <iostream>
#include <vector>
#include<algorithm>

using std::vector;
using std::min;

int lcs2(vector<int> &a, vector<int> &b, vector<int> &c) {
  //write your code here
  
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  size_t m;
  std::cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++) {
    std::cin >> b[i];
  }

  std::cout << lcs2(a, b) << std::endl;
}
