#include <vector>

using namespace std;

class Solution {
public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> seen = vector(nums.size(), 0);
    vector<int> ans;
    for (int i : nums) seen[i-1] = 1;
    for (int i = 0; i < seen.size(); i++) {
      if (seen[i] == 0) ans.push_back(i+1);
    }
    return {};
  }
};
