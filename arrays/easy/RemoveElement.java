// Remove Element
// https://leetcode.com/problems/remove-element/description/?envType=problem-list-v2&envId=array

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
