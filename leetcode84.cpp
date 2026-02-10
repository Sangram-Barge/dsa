#include <stack>
#include <vector>

class Solution {
  public:
  int largestRectangleArea(std::vector<int>& heights) {
    int max_area = 0, n = heights.size();
    std::stack<std::pair<int, int>> stk;
    for (int i = 0; i < n; i++) {
      int start = i;
      while (!stk.empty() && heights[i] < stk.top().second) {
        std::pair<int, int> top = stk.top();
        stk.pop();
        int width = i - top.first;
        int area = width * top.second;
        max_area = std::max(area, max_area);
        start = top.first;
      }
      stk.push({start, heights[i]});
    }
    while (!stk.empty()) {
      int width = n - stk.top().first;
      max_area = std::max(max_area, width * stk.top().second);
      stk.pop();
    }
    return max_area;
  }
};
