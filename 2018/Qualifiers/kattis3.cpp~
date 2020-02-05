#include <iostream>
#include <cstdlib>
#include <set>
using namespace std;
int main() {
  int input;
  cin >> input;
  char in[100][100] = {};
  char output[100][100] = {};
  std::set<int> set;
  while(input != 0) {
    cin.ignore();
    for(int i = 0; i < input; i++) {
      std::string s;
      getline(cin, s);
      
      for(int j = 0; j < s.length(); j++) {
        in[i][j] = s[j];
      }
      set.insert(s.length());
    }
    input--;
    auto rit = set.rbegin();
    int q = *rit;
    
    for(int i = 0; i < q; i++) {
      
      for(int j = input; j >= 0; j--) {
        if(in[j][i] == '\0') {
          output[i][input-j] = ' ';
          cout << output[i][input-j];
          continue;
        }
        if(in[j][i] == '-') {
          output[i][input-j] = '|';
        }
        else if(in[j][i] == '|') {
          output[i][input-j] = '-';
        }
        else {
          output[i][input-j] = in[j][i];
        }
        cout << output[i][input-j];
      }
      cout << "\n";
    }
    cin >> input;
    cout << "\n"; 
  }
  return 0;
}
    
