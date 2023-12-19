Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers. If both M and N are the same then return -1 in this case.

Example 1: 

Input: 
M = 11, N = 9
Output: 
2
Explanation: 
Binary representation of the given numbers are: 1011 and 1001, 2nd bit from right is different.
Example 2:

Input: 
M = 52, N = 4
Output: 
5
Explanation: 
Binary representation of the given numbers are: 110100 and 0100, 5th-bit from right is different.

Answer:
class Solution
{
    public:
  
    int posOfRightMostDiffBit(int m, int n)
    {
         int xorResult = m ^ n;
        
   
        if (xorResult == 0) {
            return -1;
        }

        int position = 1;
        while ((xorResult & 1) == 0) {
            xorResult = xorResult >> 1;
            position++;
        }
        
        return position;    
        
    }
};