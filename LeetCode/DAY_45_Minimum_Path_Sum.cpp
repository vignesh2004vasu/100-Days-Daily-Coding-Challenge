Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.
Note: You can only move either down or right at any point in time.


Example 1:


Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
Output: 7
Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.
Example 2:

Input: grid = [[1,2,3],[4,5,6]]
Output: 12
Answer:
class Solution {
public:
    int minPathSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int dp[m][n];
        dp[0][0]=mat[0][0];
        for(int i=1;i<n;i++)
        {
            dp[0][i]=mat[0][i]+dp[0][i-1];
        }
        for(int i=1;i<m;i++)
        {
            dp[i][0]=mat[i][0]+dp[i-1][0];
        }
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=mat[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
            
        }

        return dp[m-1][n-1];
    }
};
