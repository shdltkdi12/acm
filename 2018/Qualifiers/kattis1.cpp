#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main() {
  long long input;
  cin >> input;
  long long i =1;
  while(pow(++i, 9) <= input) {
  }
  i--;
  for(long long j = i; j > 0 ; j--) {
    bool flag = false;
    while(input% i == 0) {
      flag = true;
      input /= i;
    }
    if(flag) {
      cout << j;
      return 0;
    }
    
  }
  return 0;
}
  
  
  
  
