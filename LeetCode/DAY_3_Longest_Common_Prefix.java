Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Answers:
class Solution {
    public String longestCommonPrefix(String[] strs) {

        int n=Math.min(strs[0].length(),Math.min(strs[1].length(),strs[2].length()));
        String s="";
        for(int i=0;i<n;i++)
        {
            char c1 = strs[1].charAt(i);
            char c2 = strs[1].charAt(i);
            char c3 = strs[2].charAt(i);

            if (c1 == c2 && c2 == c3) {
                    s+=c1;
            } else {
                break;
            }
        }
        return s;

        
    }
}
