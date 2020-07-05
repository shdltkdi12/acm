#include <iostream>
#include <sstream>
#include <cstdlib>
#include <list>
using namespace std;
int main() {
  std::string line1;
  std::string line2;
  std::string line3;
  getline(cin,line1);
  getline(cin, line2);
  getline(cin, line3);
  int n, m;
  istringstream iss(line1);
  iss >> n >> m;
  std::list<int> list1;
  std::list<int> list2;
  istringstream is(line2);
  for(int i=0; i< n; i++) {
    int j;
    is >> j;
    list1.push_back(j);
  }
  istringstream isss(line3);
  for(int i=0; i<m; i++) {
    int j;
    isss >> j;
    list2.push_back(j);
  }
  list1.sort();
  list2.sort();
  int count = 0;
  for(int i = 0; i< m; i++) {
    if(list2.front() >= list1.front()) {
      count++;
    
    list1.pop_front();
    list2.pop_front();
    }
    else {
      list2.pop_front();
    }
  }
  cout << count;
}
    
    
