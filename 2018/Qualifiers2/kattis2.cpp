#include <iostream>
#include <cstdlib>
#include <sstream>
#include <algorithm>
using namespace std;
int main() {
  int count;
  cin >> count;
  cin.ignore();
  for(int i = 0; i < count; i++) {
    string input;
    getline(cin, input);
    istringstream iss(input);
    int s, d;
    iss >> s;
    iss >> d;
    int x,y;
    x = (s+d)/2;
    y = x-d;
    if(x *2 == s+d&& y >= 0) {
      cout << x << " " <<y << "\n";
    }
    else {
      cout << "impossible" << "\n";
    }
  }
  return 0;
}
