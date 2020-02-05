#include <cstdlib>
#include <iostream>
#include <set>
using namespace std;

int main() {
  int n,y;
  int count = 0;
  set<int> set;
  std::cin >> n >> y;
  for(int i = 0; i < y; i++) {
    int k;
    std::cin >> k;
    set.emplace(k);
    
  }
  int i = 0;
  while(i < n) {
    std::set<int>::iterator itr = set.find(i);
      if(itr == set.end()) {
	cout << i << "\n";
      }
      else {
	count++;
      }
      i++;
  }
  cout << "Mario got " << count << " of the dangerous obstacles.";
  return 0;
}
