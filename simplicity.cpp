
#include <iostream>
#include <set>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()  
{  
  string input;
  getline(cin, input);
  const char* cinput = input.c_str();
  std::set<char> set;
  int max = 0, current = 0;
  int sum = 0;
  int arr[26] = {};
  for(int i = 0; i < input.length(); i++) {
    arr[input[i] - 'a']++;
  }
  for(int i = 0; i < 26; i++) {
    if(arr[i] > current) {
      current = arr[i];
      if(current > max) {
        std::swap(max, current);
      }
    }
    sum += arr[i];
  }
  cout << sum-current - max;
  return 0;  
}
