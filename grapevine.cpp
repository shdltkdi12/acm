#include <cstdlib>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <queue>
#include <sstream>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
  long long n,m,d;
  long long count = 0;
  std::cin >> n >> m >> d;
  ++m;
  std::vector<string> v;
  std::vector<string> oldgossipers;
  std::unordered_map<string, int> map;
  std::unordered_map<string, int> was_changed;
  std::queue<string> q;
  while(n--){
    std::string name;
    int val;
    std::cin >> name >> val;
    map.emplace(name, val);
  }
  std::cin.ignore();
  while(m--) {
    string temp;
    string temp1 = "";
    string temp2 = "";
    std::getline(std::cin, temp);
    istringstream iss(temp);
    iss >> temp1;
    iss >> temp2;
    if(temp2 == "") {
      v.push_back(temp1);
      oldgossipers.push_back(temp1);
      break;
    }
    q.push(temp1);
    q.push(temp2);
  }
  long long ready = 0;
  string prev = v[0];
  std::queue<string> tempq1;
  std::vector<std::pair<string, string>> tempq2;
  while(d--) {
    ready = v.size();
    while(ready != 0) {
      string gossiper;
      string recipient;
      if(!tempq2.empty()) {
	for(auto i = tempq2.begin(); i != tempq2.end(); i++) {
	auto itr = map.find(i->first);
	if(itr->second == 0){
	  gossiper = i->first;
	  recipient = i->second;
	  tempq2.erase(i);
	  break;
	}
      }
      }
      else {
	gossiper = q.front();
	q.pop();
	recipient = q.front();
	q.pop();
      }
      if(gossiper != prev) {
	ready--;
	prev = gossiper;
      }
      if(!std::binary_search(v.begin(), v.end(), gossiper) && !std::binary_search(oldgossipers.begin(), oldgossipers.end(), gossiper)) {
	std::pair<string, string> p (gossiper, recipient);
	tempq2.push_back(p);
	break;
      }
      std::unordered_map<string, int>::iterator itr = map.find(recipient);
      itr->second--;
      was_changed.emplace(itr->first, 1);
      if(itr->second == 0) {
	tempq1.push(itr->first);
      }
    }
    //Cleanup
    v.erase(v.begin(), v.end());
    while(!tempq1.empty()) {
      v.push_back(tempq1.front());
      oldgossipers.push_back(tempq1.front());
      tempq1.pop();
    }
   }
  count = was_changed.size();
  cout << count << "\n";
  return 0;
}
