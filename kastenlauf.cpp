#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

bool close(vector<std::pair<int,int>>& v, int i, int j) {
  int dist = abs(v[i].first - v[j].first) + abs(v[i].second-v[j].second);
  return dist <= 1000;
}

int find(vector<int>& disjoint, int parent) {
  if(disjoint[parent] == -1) {
    return parent;
  }
  return disjoint[parent] = find(disjoint, disjoint[parent]);
}

void join(std::vector<int>& disjoint, int a, int b) {
  a = find(disjoint, a);
  b = find(disjoint, b);
  if(a==b) {
    return;
  }
  disjoint[a] = b;
}

int main() {
  int t;
  cin >> t;
  while(t--){
    int stores, temp;
    cin >> stores;
    temp = stores;
    stores+=2;
    vector<std::pair<int, int>> v;
    for(int i = 0; i < stores; i++){
      pair<int, int> p;
      cin >> p.first >> p.second;
      v.push_back(p);
    }
    vector<int> disjoint(stores, -1);
    //for every combi of points
    for(int i = 0; i < stores - 1; i++){
      for(int j = i; j < stores; j++) {
	if(close(v, i, j)) {
	  join(disjoint, i, j);
	}
      }
    }
    int home = find(disjoint, 0);
    int berg = find(disjoint, stores-1);
    if(home == berg){
      cout << "happy\n";
    }
    else {
      cout <<"sad\n";
    }
  }
    return 0;
  
}

    
    
