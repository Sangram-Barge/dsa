// Leetcode 26
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array 
public class RemoveDuplicatesFromSortedArray {
    public int removeDuplicates(int[] nums) {
        int idx = 0, runner = 1;
        while (runner < nums.length) {
            if (nums[idx] == nums[runner]) runner++;
            else nums[++idx] = nums[runner++];
        }
        return idx+1;        
    }
}
