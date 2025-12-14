#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
  int isToken(string token) {
    return token == "+" ||
    token == "-" ||
    token == "*" ||
    token == "/";
  }

  int operate(int op1, int op2, string ope) {
    if (ope == "+") return op1 + op2;
    if (ope == "-") return op1 - op2;
    if (ope == "*") return op1 * op2;
    if (ope == "/") return op1 / op2;
    return 0;
  }

public:
  int evalRPN(vector<string>& tokens) {
    int ans = 0;
    vector<string> stack;
    for (string token : tokens) {
      if (!isToken(token)) stack.push_back(token);
      else {
        int op2 = stoi(stack.back()); stack.pop_back();
        int op1 = stoi(stack.back()); stack.pop_back();
        stack.push_back(to_string(operate(op1, op2, token)));
      }
    }
    return stoi(stack.back());
  }
};

int main() {

  return 0;
}
