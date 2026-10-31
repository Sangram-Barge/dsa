import java.util.Arrays;

// longest common prefix leetcode 14
// https://leetcode.com/problems/longest-common-prefix/description/?envType=problem-list-v2&envId=array

// sort first and then look at first and last element

public class LongestCommonPrefix {
    public String longestCommonPrefix(String[] strs) {
    StringBuilder sb = new StringBuilder();    
    Arrays.sort(strs);
    String first = strs[0], last = strs[strs.length - 1];
    for (int i = 0; i < first.length(); i++) {
        if (first.charAt(i) == last.charAt(i)) sb.append(first.charAt(i));
        else return sb.toString();
    }
    return sb.toString();
    }
}
