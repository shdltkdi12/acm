#include <cstdlib>
#include <iostream>
#include <list>
#include <cmath>
#include <sstream>
using namespace std;
double polygonArea(double X[], double Y[], int n) 
{ 
    // Initialze area 
    double area = 0.0; 
  
    // Calculate value of shoelace formula 
    int j = n - 1; 
    for (int i = 0; i < n; i++) 
    { 
        area += (X[j] + X[i]) * (Y[j] - Y[i]); 
        j = i;  // j is previous vertex to i 
    } 
  
    // Return absolute value 
    return abs(area / 2.0); 
} 
int main() {
  int count;
  cin >> count;
  cin.ignore();
  std::list<std::string> strings;
  for(int i = 0; i < count; i++) {
    std::string input;
    getline(cin, input);
    strings.push_back(input);
  }
  for(std::list<std::string>::iterator it = strings.begin(); it != strings.end(); it++) {
    istringstream iss(*it);
    int p;
    iss >> p;
    double x[p] = {};
    double y[p] = {};
    for(int i = 0; i < p; i++) {
      int x1;
      int y1;
      iss >> x1;
      iss >> y1;
      x[i] = x1 * 1.0;
      y[i] = y1 * 1.0;
    }
    int n = sizeof(x)/sizeof(x[0]);
    cout << polygonArea(x, y, n) << "\n";
  }
  return 0;
}
