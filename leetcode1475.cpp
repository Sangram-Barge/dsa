#include <vector>
#include <stack>

class Solution {
public:
  std::vector<int> finalPrices(std::vector<int>& prices) {
    std::vector<int> result = prices;
    std::stack<int> stk;
    for (int i = 0; i < prices.size(); i++) {
      while(!stk.empty() && prices[stk.top()] >= prices[i]) {
        result[stk.top()] -= prices[i]; 
        stk.pop();
      }
      stk.push(i);
    }
    return result;
  }
};


int main() {
  return 0;
}
