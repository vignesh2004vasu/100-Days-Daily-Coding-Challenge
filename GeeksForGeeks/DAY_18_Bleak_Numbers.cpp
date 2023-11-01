Given an integer, check whether it is Bleak or not.
A number n is called Bleak if it cannot be represented as sum of a positive number x and set bit count in x,
i.e., x + countSetBits(x) is not equal to n for any non-negative number x.

Example 1:
Input: 
4
Output: 
1
Explanation: 
There is no x such that x + countSetbit(x) = 4
  
Example 2:
Input: 
3
Output: 
0
Explanation: 
3 is a Bleak number as 2 + countSetBit(2) = 3.
Answer:
class Solution
{
public:
	  int countSetBits(int x) {
        int count = 0;
        while (x) {
            count += x & 1;
            x >>= 1;
        }
        return count;
    }

    int is_bleak(int n) {
        for (int x = max(1, n - 32); x < n; x++) {
            if (x + countSetBits(x) == n) {
                return false;
            }
        }
        return true;
    }
};
