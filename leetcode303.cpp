#include <vector>

using namespace std;

class NumArray {
  vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
      prefix.resize(nums.size());
      prefix[0] = nums[0];
      for (int i = 1; i < nums.size(); i++) {
        prefix[i] = nums[i] + prefix[i-1];
      }
    }
    
    int sumRange(int left, int right) {
      if (left == 0) return prefix[0];
      return prefix[right] - prefix[left-1];
    }
};
