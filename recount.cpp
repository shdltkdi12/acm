#include <cstdlib>
#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;
int main() {
  std::map<string, int> map;
  std::set<int> set;
  string output;
  string s;
  while(s != "***") {
    getline(cin, s);
    if(s == "***") {
      break;
    }
    map[s]++;
  }
  int max = 0;
  bool flag = false;
  for(auto itr = map.rbegin(); itr != map.rend(); itr++) {
    if(itr->second > max) {
      max = itr->second;
    }
  }
 
  for(auto itr = map.rbegin(); itr != map.rend(); itr++) {
    auto ret =set.emplace(itr->second);
    if(!ret.second && itr->second == max) {
      flag = true;
    }
    else if(itr->second == max) {
      output = itr->first;
    }
  }
  if(flag) {
    cout << "Runoff!";
  }
  else{
    cout << output;
  }
  return 0;
}
    
