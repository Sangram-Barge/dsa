#include <vector>
#include <stack>

class Solution {
public:
  std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
    std::vector<int> res(temperatures.size(), 0);
    std::stack<int> stk;

    for (int i = 0; i < temperatures.size(); i++) {
      while(!stk.empty() && temperatures[i] > temperatures[stk.top()]) {
        int prev = stk.top();
        stk.pop();
        res[prev] = i - prev;
     }
      stk.push(i);
    }
    return res;
  }
};

/*
*
* i = 5
* [73,74,75,71,69,72,76,73]
* stk [2, 3, 5]
* ctr 0
* res [1, 1, 3]
*/

int main() {

}
