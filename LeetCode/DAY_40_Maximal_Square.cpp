Given an m x n binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.
Example 1:
Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 4
Example 2:
Input: matrix = [["0","1"],["1","0"]]
Output: 1
Example 3:
Input: matrix = [["0"]]
Output: 0

Answer:
class Solution {
public:
int min(int a,int b,int c)
{
    if(a<=b && a<=c)
        return a;
    else if(b<=c)
        return b;
    else
        return c;
        
}
    int maximalSquare(vector<vector<char>>& mat) {

        int m=mat.size();
        int n=mat[0].size();

        int dp[m+1][n+1];
    
    for(int i=0;i<=n;i++)
        dp[0][i]=0;
    for(int i=0;i<=m;i++)
        dp[i][0]=0;
        
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(mat[i-1][j-1]=='1')
            {
                dp[i][j]=min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+1;
            }
            else
                dp[i][j]=0;
        }
    }
    
    int max=dp[0][0];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(dp[i][j]>=max)
                max=dp[i][j];
        }
    }

    return max*max;
    }
};
