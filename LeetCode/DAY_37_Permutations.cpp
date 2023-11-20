Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
Answer:
class Solution {
public:
    void solve(int ind, int n, vector<int> &nums, vector<vector<int>> &ans) {
        if(ind >= n) {
            ans.push_back(nums);
            return;
        }

        for(int i=ind; i<n; i++) {
            swap(nums[i], nums[ind]);
            solve(ind+1, n, nums, ans);
            swap(nums[i], nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        solve(0, n, nums, ans);
        return ans;
        
    }
};
