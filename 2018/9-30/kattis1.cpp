#include <string>
#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;
int main(){
  std::string line1;
  std::string line2;
  getline(cin, line1);
  getline(cin, line2);
  int n, T;
  istringstream is(line1);
  std::string s1;
  std::string s2;
  is>> s1;
  n = std::stoi(s1);
  is >> s2;
  T = std::stoi(s2);
  int nums[n] ={};
  istringstream iss(line2);
  for( int i = 0; i < n; i++) {
    std::string s3;
    iss>> s3;
      nums[i] = std::stoi(s3);
  }
  
  int output = 0;
  int sum = nums[0];
  if(nums[0] > T) {
    cout << 0;
    return 0;
  }
  else if(n == 1) {
    if(sum < T) {
      cout << 1;
      return 0;
    }
  }
  for(int i = 0; i< n; i++) {
    sum = sum + nums[i+1];
    if(i == n-1 && (sum<T || sum == T)) {
      output = i+1;
      break;
    }
    else if(i == n-1 && sum > T) {
      output = i;
      break;
    }
    if(sum < T || sum == T) {
      continue;
    }
    
    else {
      output = i+1;
      break;
    }
  }

  cout << output;
  for(int i =0 ;i < n;i ++) {
    cout << nums[i] << " ";
  }
  return 0;
}
