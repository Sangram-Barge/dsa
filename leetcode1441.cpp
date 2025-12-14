#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<string> buildArray(vector<int>& target, int n) {
    vector<string> ans;
    int i = 0, j = 0;
    while (j < target.size()) {
      if (i+1 == target[j]) {
        ans.push_back("Push");
        i++; j++;
      }
      else {
        ans.push_back("Push"); ans.push_back("Pop");
        i++;
      }
    }
    return ans;
  }
};

int main() {
  Solution solution;
  vector<int> tg{1, 3};
  vector<string> ans = solution.buildArray(tg, 3);
  for (int i = 0; i < ans.size(); i++) 
    cout << ans[i] << " ";
  return 0;
}
