#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <list>
using namespace std;
int main() {
  int n;
  cin >> n;
  cin.ignore();
  std::string instring;
  getline(cin, instring);
  std::set<int> set;
  istringstream iss(instring);
  for(int i = 0; i < n; i++) {
    int bus;
    iss >> bus;
    set.insert(bus);
  }
  int array[set.size()] = {};
  int z = 0;
  for(std::set<int>::iterator it = set.begin(); it != set.end(); ++it) {
    array[z] = *it;
    z++;
  }
  std::list<int> lists[n] = {};
  int counter = 0;
  for(int i = 0; i < n-1; i++) {
    if(array[i+1] - array[i] == 1) {
      lists[counter].push_back(array[i]);
      lists[counter].push_back(array[i+1]);
    }
    else{
      lists[counter].push_back(array[i]);
      lists[counter].unique();
      counter++;
      if(i == n-2) {
        lists[counter].push_back(array[i+1]);
      }
    }
  }
  for(int i = 0; i < n; i++) {
    if(lists[i].empty()) {
      break;
    }
    if(lists[i].size() > 2) {
      cout<< lists[i].front() << "-" << lists[i].back() << " ";
    }
    else if(lists[i].size() == 2) {
      cout << lists[i].front() << " " << lists[i].back() << " ";
    }
    else {
      cout << lists[i].front() << " ";
    }
  }
}
