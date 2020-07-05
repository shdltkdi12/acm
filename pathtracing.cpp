#include <set>
#include <iostream>
#include <cstdlib>
#include <list>
#include <sstream>
using namespace std;
int main() {
  bool array[1000][1000];
  array[499][499] = true;
  std::set<int> bounds;
  std::set<int> heights;
  std::list<string> last;
  std::string line;
  int row = 499;
  int col = 499;
  bounds.insert(row);
  heights.insert(col);
  while(getline(cin, line)) {
    if(line == "down") {
      array[++row][col] = true;
      std::string s = to_string(row) + " " + to_string(col);
      last.push_back(s);
      heights.insert(row);
    }
    else if(line == "up") {
      array[--row][col] = true;
      std::string s = to_string(row) + " " + to_string(col);
      last.push_back(s);
      heights.insert(row);
    }
    else if(line == "left") {
      array[row][--col] = true;
      std::string s = to_string(row) + " " + to_string(col);
      last.push_back(s);
      bounds.insert(col);
    }
    else if(line == "right") {
      array[row][++col] = true;
      std::string s = to_string(row) + " " + to_string(col);
      last.push_back(s);
      bounds.insert(col);
    }
    else {
      break;
    }
  }
  std::set<int>::iterator it = bounds.begin();
  int lb = *it;
  it = --(bounds.end());
  int ub = *it;
  int x = ub- lb;
  it = heights.begin();
  int lh = *it;
  it = --(heights.end());
  int uh = *it;
  int y = uh - lh;
  for(int i = 0; i < x+3; i++) {
    cout<<"#";
  }
  cout << "\n"; 
  int lastx,lasty;
  istringstream iss(last.back());
  iss >> lastx;
  iss >> lasty;

  for(int i = lh; i < uh+1; i++) {
    cout << "#";
    for(int j = lb; j < ub+1; j++) {
      if(i == 499 && j == 499) {
        cout << "S";
        continue;
      }
      if(array[i][j] && i== lastx && j == lasty) {
        cout << "E";
        continue;
      }
      else if(array[i][j]) {
        cout<< "*";
      }
      else if(!array[i][j]) {
        cout << " ";
      }
    }
    cout <<"#\n";
  }
  for(int i = 0; i < x+3; i++) {
    cout << "#";
  }
  cout << "\n";
  return 0;
}
      
