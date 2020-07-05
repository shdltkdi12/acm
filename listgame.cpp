#include <cstdlib>
#include <iostream>
#include <math.h>
#include <list>
using namespace std;
int main() {
int n;
cin >> n;
std::list<int> list;
std::list<int>::iterator it = list.begin();
  while (n%2 == 0) {
    list.emplace(it, 2);
    it++;
    n = n/2;
  }  
  for (int i = 3; i <= sqrt(n); i = i+2) {
    while (n%i == 0) 
      {
        list.emplace(it, i);
        it++;
        n = n/i; 
      } 
  } 
  if (n > 2) {
    list.emplace(it, n);
  }
cout << list.size() << " ";
return 0;
}
