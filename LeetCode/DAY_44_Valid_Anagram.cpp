Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
Answer:
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
      
        for (char x : s) {
            count[x - 'a']++;
        }
     
        for (char x : t) {
            count[x - 'a']--;
        }
        

        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        
        return true;
        
    }
};
