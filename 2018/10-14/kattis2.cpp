#include <cstdlib>
#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
  int count;
  cin >> count;
  cin.ignore();
  std::list<std::string>list;
  for(int i =0; i < count; i++) {
    std::string input;
    getline(cin, input);
    list.push_back(input);
  }
  int num =1;
  string a = "abc";
  string d = "def";
  string g = "ghi";
  string j = "jkl";
  string m = "mno";
  string p = "pqrs";
  string t = "tuv";
  string w = "wxyz";
  for(std::list<std::string>::iterator it = list.begin(); it != list.end(); it++) {
    char prev;
    std::string s = *it;
    std::string output = "Case #" + std::to_string(num);
    output += ": ";
    for(int i =0; i< s.length(); i++) {
      if(s[i] == prev) {
        output += " ";
      }
      else if(a.find(to_string(prev)) != std::string::npos && a.find(to_string(s[i])) != std::string::npos) {
        output += " ";
      }
      else if(d.find(to_string(prev)) != std::string::npos && d.find(to_string(s[i])) != std::string::npos) {
        output += " ";
      }
      else if(g.find(to_string(prev)) != std::string::npos && g.find(to_string(s[i])) != std::string::npos) {
        output += " ";
      }
      else if(j.find(to_string(prev)) != std::string::npos && j.find(to_string(s[i])) != std::string::npos) {
        output += " ";
      }
      else if(m.find(to_string(prev)) != std::string::npos && m.find(to_string(s[i])) != std::string::npos) {
        output += " ";
      }
      else if(p.find(to_string(prev)) != std::string::npos && p.find(to_string(s[i])) != std::string::npos) {
        output += " ";
      }
      else if(t.find(to_string(prev)) != std::string::npos && t.find(to_string(s[i])) != std::string::npos) {
        output += " ";
      }
      else if(w.find(to_string(prev)) != std::string::npos && w.find(to_string(s[i])) != std::string::npos) {
        output += " ";
      }
      switch(s[i]) {
      case 'a': output += "2";
        break;
      case 'b': output += "22";
        break;
      case 'c': output += "222";
        break;
      case 'd': output += "3";
        break;
      case 'e': output += "33";
        break;
      case 'f': output += "333";
        break;
      case 'g': output += "4";
        break;
      case 'h': output += "44";
        break;
      case 'i': output += "444";
        break;
      case 'j': output += "5";
        break;
      case 'k': output += "55";
        break;
      case 'l': output += "555";
        break;
      case 'm': output += "6";
        break;
      case 'n': output+= "66";
        break;
      case 'o': output+="666";
        break;
      case 'p': output += "7";
        break;
      case 'q': output += "77";
        break;
      case 'r': output += "777";
        break;
      case 's': output += "7777";
        break;
      case 't': output += "8";
        break;
      case 'u' : output+= "88";
        break;
      case 'v' : output += "888";
        break;
      case 'w':output+="9";
        break;
      case 'x':output+= "99";
        break;
      case 'y':output +="999";
        break;
      case 'z':output += "9999";
        break;
      default: output+= "0";
        break;
      }
      prev = s[i];
    }
    cout << output << "\n";
    num++;
  }
  return 0;
}
      
