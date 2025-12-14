#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> smallerNumbersThanCurrentBF(vector<int>& nums) {
    vector<int> ans(nums.size(), 0);
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 0; j < nums.size(); j++) {
        if (nums[j] < nums[i]) ans[i]++;
      }
    }
    return ans;
  }

  vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> freq(101), ans(nums.size());
    for (int i = 0; i < nums.size(); i++) freq[nums[i]]++;
    for (int i = 1; i < freq.size(); i++) freq[i] += freq[i-1];
    for (int i = 0; i < nums.size(); i++) 
      if (nums[i] == 0) ans[i] = 0;
      else ans[i] = freq[nums[i] - 1];
    return ans;
  }
};


int main() {
  vector<int> v{8,1,2,2,3};
  Solution s;
  vector<int> ans = s.smallerNumbersThanCurrent(v);
  for (int i = 0; i < ans.size(); i++) {
    cout << v[i] << " " << ans[i] << "\n";
  }
  return 0;
}
