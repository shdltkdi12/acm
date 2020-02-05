#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int ub = 1000;
  int lb = 1;
  for(int i = 0; i < 10; i++) {
    std::string answer;
    if (ub >= lb) 
      { 
        int mid = lb + (ub - lb)/2;
        cout << mid;
        cout << std::endl;
        cin >> answer;
        if(answer.at(0) == 'c') {
          return 0;
        }
        else if (answer.at(0) == 'h') {
          lb = mid +1;
        }
        else {
          ub = mid -1;
        }
      }
  }
  return 0;
}
