Given a sorted array of distinct integers and a target value, retum the index if the target is found. If not, return the index
where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
Example 1:

Example 1:
Input: nums=[1,3,5,6], target=5;
output: 2

Example 2:
Input: nums=[1,3,5,6], target=2;
output: 1;
Answer:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target || nums[i]>target)
                return i;
        }
        return n;
        
    }
};
