#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int count;
  cin >> count;
  cin.ignore();
  int g;
  cin >> g;
  int output[count] = {};
  output[0] = g;
  int count1 = 1;
  for(int i = 0; i < count-1; i++) {
    int k;
    cin >> k;
    if(k > g) {
      g = k;
      output[count1] = g;
      count1++;
    }
  }
  cout << count1;
  cout << "\n";
  for(int i = 0; i < count1; i++) {
    cout << output[i] << " ";
  }
  return 0;
}

  
