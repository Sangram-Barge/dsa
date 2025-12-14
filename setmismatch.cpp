#include <iostream>
#include <vector>

using namespace std;

class Solution {
	public:
	vector<int> findErrorNums(vector<int> &nums) {
    vector<int> freq(nums.size());
    vector<int> ans(2);
    for (int i = 0; i < nums.size(); i++) freq[nums[i] - 1]++;
    for (int i = 0; i < freq.size(); i++) {
      if (freq[i] == 0) ans[1] = i + 1;
      if (freq[i] == 2) ans[0] = i + 1;
    }
    return ans;
	}
};

int main() {
	Solution solution;
	vector<int> nums{1, 2, 2, 4};
	vector<int> err = solution.findErrorNums(nums);
  cout << "extra num " << err[1] << "\n";
  cout << "non num " << err[0] << "\n";
}
