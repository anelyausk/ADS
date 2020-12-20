#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    
    stack<int> l;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '+' || s[i] == '*' || s[i] == '-') {
            int a = l.top();
            l.pop();
            int b = l.top();
            l.pop();
            if (s[i] == '+') {
                l.push(a + b);
            } else if (s[i] == '-') {
                l.push(b - a);
            } else if (s[i] == '*') {
                l.push(a * b);
            }
        } 
        else if (isdigit(s[i])) {
            l.push(s[i] - '0');
        }
  }
  cout << l.top();
  return 0;
}