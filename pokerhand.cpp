#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
  std::unordered_map<char, int> map;
  int output = 0;
  char s[2];
  while(std::cin >> s) {
    map[s[0]]++;
    }
  for(auto i : map) {
    output = std::max(i.second, output);
  }
  std::cout << output;
  return 0;
}
  
