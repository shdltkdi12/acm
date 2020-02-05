#include <cstdlib>
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <sstream>
using namespace std;
int main() {
  std::string t1;
  int W;
  int P;
  std::set<int> output;
  std::set<int>::iterator it = output.begin();
  getline(cin, t1);
  std::string input;
  getline(cin, input);
  istringstream iss(t1);
  std::string string1;
  iss >> string1;
  W = std::stoi(string1);
  std::string string2;
  iss >> string2;
  P = std::stoi(string2);
  std::vector<int> L(W);
  istringstream is(input);
  for (int i = 0; i< P; i++) {
    std::string string3;
    is >> string3;
    int t = std::stoi(string3);
    L.at(i) = t;
  }
  output.insert(W);
  for(int i = 0; i< P; i++) {
    output.insert(L.at(i));
    int temp = W-L.at(i);
    output.insert(temp);
    if(i != P-1) {
      for(int j = i; j < P-1; j++) {
        int temp1 = L.at(j+1) - L.at(i);
        output.insert(temp1);
      }
    }
  }
  for(int const& i : output) {
    cout<< i << " ";
  }
}
    
    
