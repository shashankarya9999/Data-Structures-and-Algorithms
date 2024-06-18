#include <iostream>
#include <vector>
#include<algorithm>
#include<functional>
#include<bits/stdc++.h>
#include<utility>
#include<unordered_map>

using std::vector;

// // function that sorts the first array based on order of
// // them in second array
// void sortA1ByA2(vector<int>& arr1, vector<int>& arr2)
// {
//     // map to store the indices of second array
//     // so that we can easily judge the position of two
//     // elements in first array
//     std::unordered_map<int, int> index;

//     for (size_t i = 0; i < arr2.size(); i++) {
//         // assigning i+1
//         // because by default value of map is zero
//         // Consider only first occurrence of element
//         if (index[arr2[i]] == 0) {
//             index[arr2[i]] = i + 1;
//         }
//     }

//     // comparator function that sorts arr1 based on order
//     // defined in arr2
//     auto comp = [&](int a, int b) {
//         // if indices of two elements are equal
//         // we need to sort them in increasing order
//         if (index[a] == 0 && index[b] == 0)
//             return a > b;

//         // if a not present in arr2 then b should come
//         // before it
//         if (index[a] == 0)
//             return false;

//         // if b not present in arr2 then no swap
//         if (index[b] == 0)
//             return true;

//         // sorting in increasing order
//         return index[a] > index[b];
//     };

//     sort(arr1.begin(), arr1.end(), comp);
// }

// double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
//   vector<int> vw {};

//   for(size_t i=0; i< weights.size(); ++i)
//   {
//     vw.push_back(values.at(i)/weights.at(i));
//   }
//   std::cout << vw.at(0) << vw.at(1) << vw.at(2) << std::endl;
//   sort(vw.begin(),vw.end(), std::greater<int>());
//   sortA1ByA2(weights,vw);
  
//   std::cout << vw.at(0) << vw.at(1) << vw.at(2) << std::endl;
//   std::cout << weights.at(0) << weights.at(1) << weights.at(2) << std::endl;
//   std::cout << values.at(0) << values.at(1) << values.at(2) << std::endl;

//   double value = 0.0;

//   for(size_t i=0; i < weights.size(); i++)
//   {
//     if(capacity==0)
//       return value;

//     else {
//       double a = std::min(weights.at(i),capacity);
//       std::cout << a << std::endl;
//       value += a * (vw.at(i));
//       std::cout << value << std::endl;
//       weights.at(i) -= a;
//       capacity -= a;  
//     }  
//   }

//   return value;
// }

int get_max_index(vector<int> weights, vector<int> values) {
    int max_i = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double) values[i] / weights[i] > max) {
            max = (double) values[i] / weights[i];
            max_i = i;
        }
    }
    return max_i;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;

    for (int i = 0; i < weights.size(); i++) {
        if (capacity == 0) return value;
        int index = get_max_index(weights, values);
        int a = std::min(capacity, weights[index]);
        value += a * (double) values[index] / weights[index];
        weights[index] -= a;
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
