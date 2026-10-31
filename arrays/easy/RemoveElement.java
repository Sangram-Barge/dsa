// Remove Element leetcodee 27
// https://leetcode.com/problems/remove-element/description/?envType=problem-list-v2&envId=array

// two pointers j will move forward till it finds nums[i] != val, 
// i will keep track of the current index, when j finds nums[j] != val we 
// get that element to nums[i] = nums[j] and move both forward

public class RemoveElement {
    public int removeElement(int[] nums, int val) {
        int i = 0, j = 0;
        while(i < nums.length && j < nums.length) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                j++; i++;
            } else {
                j++;
            }
        }
        return i;
    }
}
