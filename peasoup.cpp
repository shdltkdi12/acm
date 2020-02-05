#include <cstdlib>
#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
int main() {
  int n;
  int count = 0;
  std::cin >> n;
  const int m = n;
  const string p1 = "pea soup";
  const string p2 = "pancakes";
  std::vector<std::string> names;
  bool flag1, flag2 = false;
  while(n--) {
    int k;
    std::cin >> k;
    std::cin.ignore();
    std::string name;
    std::set<std::string> v;
    std::getline(std::cin, name);
    for(k; k > 0; k--) {
      string s = "";
      std::getline(std::cin, s);
      v.emplace(s);
    }
    if(v.find("pea soup")!= v.end() && v.find("pancakes") != v.end()) {
	count++;
	cout << name << "\n";
	break;
    }
	
  }
  if(count == 0) {
    cout << "Anywhere is fine I guess\n";
  }
  return 0;
}
    
    
