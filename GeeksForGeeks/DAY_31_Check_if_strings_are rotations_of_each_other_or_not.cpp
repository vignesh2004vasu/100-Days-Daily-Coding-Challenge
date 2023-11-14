You are given two strings of equal lengths, s1 and s2. The task is to check if s2 is a rotated version of the string s1.
Note: The characters in the strings are in lowercase.
Example 1:

Input:
geeksforgeeks
forgeeksgeeks
Output: 
1
Explanation:
s1 is geeksforgeeks, s2 is forgeeksgeeks. Clearly, s2 is a rotated version of s1 as s2 can be obtained by left-rotating s1 by 5 units.
  
Example 2:
Input:
mightandmagic
andmagicmigth
Output: 
0
Explanation: Here with any amount of rotation s2 can't be obtained by s1.

Answer:

class Solution
{
    public:
 
    bool areRotations(string s1,string s2)
    {
        if (s1.length() != s2.length()) {
        return false;
    }

    
    string concatenated = s1 + s1;

    
    if (concatenated.find(s2) != string::npos) {
        return true;
    } 
    else {
        return false;
    }
    
    }
};
