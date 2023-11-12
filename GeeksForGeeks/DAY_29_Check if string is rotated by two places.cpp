Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating (in any direction) string 'a' by exactly 2 places.

Example 1:

Input:
a = amazon
b = azonam
Output: 
1
Explanation: 
amazon can be rotated anti-clockwise by two places, which will make it as azonam.
Example 2:

Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 
0
Explanation: 
If we rotate geeksforgeeks by two place in any direction, we won't get geeksgeeksfor.
Your Task:
The task is to complete the function isRotated() which takes two strings as input parameters and checks if given strings can be formed by rotations. 
The function returns true if string 1 can be obtained by rotating string 2 by two places, else it returns false.
Answer:
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n = str1.length();

        // Check if lengths are different or less than 2
        if (n != str2.length() || n < 2) {
            return false;
        }
    
        // Clockwise rotation
        string clockwise_rotated = str1.substr(2) + str1.substr(0, 2);
        if (clockwise_rotated == str2) {
            return true;
        }
    
        // Anti-clockwise rotation
        string anticlockwise_rotated = str1.substr(n - 2) + str1.substr(0, n - 2);
        return anticlockwise_rotated == str2;
    }

};
