#include <iostream>
#include <string>
#include <cstdlib>
int main()
{
  long long n, size;
  long long sum = 0, count = 0;
  std::cin >> n;
  int arr[n];
  size = n;
  while(n--) {
      int num;
      std::cin >> num;
      arr[count] = num;
      count++;
  }
//Problem states for the ith world, it has to have a i+1 comparison planet.
//Thus, arr.size() - 1 is not the correct place to start.
  for(int i = size - 2; i >= 0; --i) {
      std::cout << i << "\n";
      int temp = std::min(arr[i], arr[i+1] - 1);
      if(arr[i] > temp ) {
	sum += arr[i] - temp;
	arr[i] = temp;
      }
  }

  if(arr[0] < 0) {
    std::cout << 1 << "\n";
  }
  else {
  std::cout << sum << "\n";
  }
  return 0;
  }
  
