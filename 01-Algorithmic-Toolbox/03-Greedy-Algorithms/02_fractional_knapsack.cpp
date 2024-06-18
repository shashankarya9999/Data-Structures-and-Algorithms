#include <iostream>
#include <vector>
#include<algorithm>
#include<functional>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  vector<double> vw {0.0};

  for(size_t j=0; j < weights.size(); j++)
  {
    double frac = values.at(j) / weights.at(j);
    vw.push_back(frac);
    std::cout << vw.at(j) << "\n";
  }

  sort(vw.begin(),vw.end(), std::greater<int>());

  std::cout << vw.at(0) << vw.at(1) << vw.at(2) << vw.at(3) << std::endl;

  for(size_t i=1; i <= weights.size(); ++i)
  {
    if(capacity==0)
      return value;

    int a = std::min(weights.at(i),capacity);
    value += a * (vw.at(i));

    weights.at(i) -= a;
    capacity -= a;    
  }

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
