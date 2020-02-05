#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>
#include <stack>
using namespace std;
int main() {
  int numcount =0;
  int num;
  std::string input;
  int guess[2500] = {};
  std::string response[2500] = {};
  int keys[2501] = {};
  keys[0] = -1;
  int keycount = 1;
  while(cin >> num) {
    if(num == 0) {
      break;
    }
    guess[numcount] = num;
    cin.ignore();
    getline(cin, input);
    response[numcount] = input;
    if(input == "right on") {
      keys[keycount] = numcount;
      keycount++;
    }
    numcount++;
  }
  std::stack<std::string> output;
  for(int i = keycount -1 ; i >= 1; i--) {
    int number = guess[keys[i]];
    bool flag = true;
    for(int j = keys[i] - 1; j > keys[i-1]; j--) {
      if(response[j] == "too high") {
        flag = (guess[j] > number) && flag;
      }
      else if(response[j] == "too low") {
        flag = guess[j] < number && flag;
      }
    }
    if(flag) {
      output.push("Stan may be honest\n");
    }
    else {
      output.push("Stan is dishonest\n");
    }
  }
  while(!output.empty()) {
    cout << output.top();
    output.pop();
  }
  if(output.empty()) {
    cout << " ";
  }
  return 0;
}
      
    
