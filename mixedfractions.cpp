#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <queue>
using namespace std;
int main() {
  std::queue<std::string> queue;
  std::string input;
  while(getline(cin, input)) {
    if(input == "0 0") {
      break;
    }
    queue.push(input);
  }
  while(!queue.empty()) {
    istringstream iss(queue.front());
    int num, denom;
    iss >> num;
    iss >> denom;
    int result = num / denom;
    int remain = num % denom;
    cout << result << " " << remain << " / " << denom << "\n";
    queue.pop();
  }
  return 0;
}
    
  
