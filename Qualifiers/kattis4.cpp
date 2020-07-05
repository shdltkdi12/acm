#include <cstdlib>
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
int main() {
  int count;
  cin >> count;
  cin.ignore();
  while(count != 0) {
    string s;
    getline(cin, s);
    istringstream iss(s);
    double midx1, midy1, midx2, midy2;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    iss >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    midx1 = (x1+x2)/2;
    midx2 = (x3+x4)/2;
    midy1 = (y1+y2)/2;
    midy2 = (y3+y4)/2;
    double leg1, leg2, hyp;
    leg1 = (midy2) - (midy1);
    leg2 = (midx2) - (midx1);
    hyp = pow(leg1, 2) + pow(leg2, 2);
    hyp = pow(hyp, 0.5);
    cout << hyp << "\n";
    count--;
  }
  return 0;
}
