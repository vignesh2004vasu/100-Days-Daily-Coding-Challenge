Given a non-empty array of integers nums, every element appears twice except for one.
Find that single one.
Example 1:
Input: nums = [2,2,1]
Output: 1
  
Example 2:
Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: 
nums = [1]
Output: 1

Answer:
XORing all elements will cancel out the elements that appear twice, leaving only the single element.
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
        
    }
};

  
 
