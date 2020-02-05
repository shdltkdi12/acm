#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
using namespace std;
struct node {
  node* parent;
  vector<node*> children;
  int n;
};
int main() {
  int count;
  cin >> count;
  node *one = new node();
  one->n = 1;
  node *two = new node();
  two->n = 2;
  node *three = new node();
  three->n = 3;
  node *four = new node();
  four->n = 4;
  node *five = new node();
  five->n = 5;
  node *six = new node();
  six->n = 6;
  node *seven = new node();
  seven->n =7;
  node *eight = new node();
  eight->n = 8;
  node *nine = new node();
  nine ->n = 9;
  node *zero = new node();
  one->children = {four, five, six};
  two->children = {four, five, six};
  three->children = {four, five, six};
  four->children = {seven, eight, nine};
  five->children = {seven, eight, nine};
  six->children = {seven, eight, nine};
  seven->children = {zero};
  eight->children = {zero};
  nine->children = {zero};
  zero->n = 0;
  for(int i = 0; i< count; i++) {
    string input;
    string output;
    cin >> input;
    for(int j = 0; j< input.length(); j++) {
      string w;
      switch((int)input[j]) {
      case 1: w = "one";
        break;
      case 2: w = "two";
        break;
      case 3: w = "three";
        break;
      case 4: w = "four";
        break;
      case 5: w = "five";
        break;
      case 6: w = "six";
        break;
      case 7: w = "seven";
        break;
      case 8: w = "eight";
        break;
      case 9: w = "nine";
        break;
      case 0: w = "zero";
        break;
      }
      output += input[j];
      
  }
    
