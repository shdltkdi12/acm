#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calculate(std::vector<int>& v, int midpoint) {
  int count = 0;
  int curr = -1;
  for(auto i:v) {
    if(curr < i) {
      count++;
      curr = i+midpoint;
    }
  }
  return count;
}
int main() {
  int tests;
  std::cin >> tests;
  for(int i = 0; i < tests; i++) {
    int n, m;
    cin >> n >> m;
    std::vector<int> houses(m);
    for(auto& i: houses) {
      cin >> i;
    }
    std::sort(houses.begin(), houses.end());
    int  lo = 0;
    int hi = 200000;
    while(hi-lo > 0) {
      int mid = (hi+lo)/2;
      int count = calculate(houses, mid);
      if(count > n) {
	lo = mid + 1;
      }
      else {
	hi = mid;
      }
      cout << lo << " " << hi << endl;
    }
    cout << fixed;
    cout.precision(1);
    cout << lo / 2.0 << endl;
    
  return 0;
  }
}
