#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int find(vector<int>& d, int a) {
    if(d[a] == -1) return a;
    return d[a] = find(d, d[a]);
}

void join(vector<int>& d, int a, int b) {
    a = find(d, a);
    b = find(d, b);
    if(a == b) return;
    d[a] = b;
}


int main() {
  int n,m;
  cin >> n >> m;
  std::vector<int> d(n, -1);
  while(m--) {
    int a,b;
    cin >> a >> b;
    --a;
    --b;
    join(d,a,b);
  }
  bool flag = true;
  for(int i = 0; i < n; i++) {
    if(find(d,i) != find(d,n-i-1)) flag = false;
  }
  flag ? cout<<"Yes"<<endl: cout<<"No"<<endl;
  return 0;
}
