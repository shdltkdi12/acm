#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int lis(const char arr[], int n )  
{  
    int lis[n]; 
   
    lis[0] = 1;    
  
    /* Compute optimized LIS values in bottom up manner */
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    }
    return *max_element(lis, lis+n);
};  
int main() {
  std::string input;
  cin >>input;
  const char* cinput= input.c_str();
  int output;
  output = lis(cinput, input.length());
  cout << 26 - output;
  return 0;
}
