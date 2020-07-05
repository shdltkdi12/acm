#include <iostream>
#include <cstdlib>
#include <sstream>
#include <list>
#include <set>
using namespace std;
int main(){
  int count;
  cin >> count;
  cin.ignore();
  while(count != 0) {
    std::string string1;
    std::string string2;
    getline(cin, string1);
    getline(cin, string2);
    std::list<int> list;
    int n, m;
    istringstream iss(string1);
    iss >> n;
    iss >> m;
    istringstream is(string2);
    iss.clear();
    
    for(int i = 0; i < n; i++) {
      int number;
      is >> number;
      list.push_back(number);
    }
    is.clear();
    int max = 0;
    for(std::list<int>::iterator it = list.begin(); it != list.end(); it++){
      int total = 0;
      if(*it == m) {
        total += *it;
        for(std::list<int>::iterator i = it; i != list.end(); i++) {
          if(*i != m) {
            total += *i;
          }
        }
        if(max <= total) {
          max = total;
        }
      }
    }
    
    cout << max << "\n";
    count--;
  }
  return 0;
}

    
