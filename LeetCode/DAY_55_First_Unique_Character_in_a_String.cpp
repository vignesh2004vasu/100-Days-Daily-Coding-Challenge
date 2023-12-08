Given a string s, find the first non-repeating character in it and return its index.
If it does not exist, return -1.

Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1
Answer:
class Solution {
    public int firstUniqChar(String s) {
        int m=0;
        for(int i : s.toCharArray()) {
            
            if(s.indexOf(i) == s.lastIndexOf(i)){
                return m;
            }
            m++;
        }
        return -1;
        
    }
}
