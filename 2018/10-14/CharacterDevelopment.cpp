#include <iostream>
#include <cstdlib>

/*
 * Given n characters, there are 2^n subsets, n of which are singletons and 1 empty.
 * Therefore we need 2^n - n - 1 relations to develop or (1<<n)-n-1.
 */

using namespace std;
int main() {
  int n;
  cin >> n;
  cout << (1<<n) - n -1;
  return 0;
}
