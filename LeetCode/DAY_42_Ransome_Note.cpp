Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 Answer:
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int counter[26] = {0};
       
        for(char ch : magazine)
            counter[ch - 'a']++;
       
        for(char ch : ransomNote)
          
            if(counter[ch - 'a']-- <= 0)
                return false;
        return true;  
    }
};
