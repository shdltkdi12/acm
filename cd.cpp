#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  while(true) {
  long long count = 0;
  long long m, n;
  std::cin >>m >>n;
  if(m == 0 && n == 0) {
    break;
  }
  std::vector<int> v;
  while(m--){
    int temp;
    std::cin >> temp;
    v.push_back(temp);
  }
  while(n--) {
    int temp2;
    std::cin>>temp2;
    if(std::binary_search(v.begin(), v.end(), temp2)) {
	count++;
    }
  }
   std::cout << count << "\n";
  }
 
}
      
