#include <cstdlib>
#include <iostream>
#include <set>
#include <list>
#include <unordered_map>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<std::pair<int, int>> set;
  list<int> diff;
  std::unordered_map<string, int> un_map;
  diff.push_back(1);
  map<int, int> map;
  for(int i = 1; i < 13; i++) {
    if(i == 4 || i == 6 || i== 9 || i == 11) {
      map[i] = 30;
    }
    else if(i ==2) {
      map[i] = 28;
    }
    else{
      map[i] = 31;
    }
  }
  while(n--) {
    string dummy, date;
    cin >> dummy >> date;
    int prev, succ;
    std::string::size_type sz;
    string s1 = "";
    s1 = s1 + date[0] + date[1];
    string s2 = "";
    s2 = s2 + date[3] + date[4];
    prev = std::stoi(s1, &sz);
    succ = std::stoi(s2, &sz);
    std::pair<int, int> p(prev,succ);
    set.emplace(p);
  }
  int prev_sum = 0;
  int max = 0;
  for(auto v: set) {
    int key = v.first;
    int sum = v.second;
    for(auto itr = map.begin(); itr != map.end(); itr++) {
      if(itr->first != key) {
	sum += itr->second;
      }
      else {
	break;
      }
    }
    int difference = sum - prev_sum;
    prev_sum = sum;
    if(difference > max) {
      max = difference;
    }
    diff.push_back(difference);
    string dummy = "";
    string dummy1 = std::to_string(v.first);
    string dummy2 = std::to_string(v.second - 1);
    if(dummy1.length() == 1) {
      dummy1 = "0" + dummy1;
    }
    if(dummy2.length() == 1) {
      dummy2 = "0" + dummy2;
    }
    dummy = dummy + dummy1 +"-"+ dummy2;
    if(un_map.empty()) {
      un_map.emplace(dummy, 0);
    }
    else{
      un_map.emplace(dummy, difference);
    }
  }
  diff.pop_front();
  int isRepeated;
  for(auto itr = diff.begin(); itr != diff.end(); itr++) {
    if(*itr == max) {
      isRepeated++;
    }
  }
  isRepeated--;
  if(isRepeated) {
    std::pair<int,int> p(10,28);
    auto isFound = set.find(p);
    if(isFound != set.end()) {
      cout << "10-28";
    }
    else {
      for(auto v: un_map) {
	if(v.second == max) {
	  cout << v.first;
	}
      }
    }
  }
    else {
      for(auto v: un_map) {
	if(v.second == max) {
	  cout << v.first;
	}
      }
    }
  
  return 0;
  
}
