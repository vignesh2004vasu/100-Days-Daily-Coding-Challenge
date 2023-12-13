Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From a given cell, the miner can move

to the cell diagonally up towards the right 
to the right
to the cell diagonally down towards the right
Find out maximum amount of gold which he can collect until he can no longer move.

Example 1:

Input: n = 3, m = 3
M = {{1, 3, 3},
     {2, 1, 4},
     {0, 6, 4}};
Output: 12
Explaination: 
The path is {(1,0) -> (2,1) -> (2,2)}.

Example 2:

Input: n = 4, m = 4
M = {{1, 3, 1, 5},
     {2, 2, 4, 1},
     {5, 0, 2, 3},
     {0, 6, 1, 2}};
Output: 16
Explaination: 
The path is {(2,0) -> (3,1) -> (2,2) 
-> (2,3)} or {(2,0) -> (1,1) -> (1,2) 
-> (0,3)}.


Answer:
class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int dp[n][m];

   
        for (int i = 0; i < n; ++i) {
            dp[i][m - 1] = M[i][m - 1];
        }

    
    for (int j = m - 2; j >= 0; --j) {
        for (int i = 0; i < n; ++i) {
            int right = dp[i][j + 1]; 
            int up = (i > 0) ? dp[i - 1][j + 1] : 0; 
            int down = (i < n - 1) ? dp[i + 1][j + 1] : 0;

          
            dp[i][j] = M[i][j] + max({ right, up, down });
        }
    }


    int maxG = 0;
    for (int i = 0; i < n; ++i) {
        maxG = max(maxG, dp[i][0]);
    }

    return maxG;
        
    }
};