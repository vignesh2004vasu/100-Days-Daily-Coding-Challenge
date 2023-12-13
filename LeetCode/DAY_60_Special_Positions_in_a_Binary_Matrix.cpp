Given an m x n binary matrix mat, return the number of special positions in mat.

A position (i, j) is called special if mat[i][j] == 1 and all other elements in row i and column j are 0 (rows and columns are 0-indexed).

 

Example 1:


Input: mat = [[1,0,0],[0,0,1],[1,0,0]]
Output: 1
Explanation: (1, 2) is a special position because mat[1][2] == 1 and all other elements in row 1 and column 2 are 0.
Example 2:


Input: mat = [[1,0,0],[0,1,0],[0,0,1]]
Output: 3
Explanation: (0, 0), (1, 1) and (2, 2) are special positions.

Answer:
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        int n=mat.size(),m=mat[0].size();
        vector<int>row(n,0),col(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row[i]+=mat[i][j];
                col[j]+=mat[i][j];
            }
        }
        for(int i=0;i<n;i++){
            if(row[i]==1){
                for(int j=0;j<m;j++){
                    if(col[j]==1&&mat[i][j]==1){
                        ans++;
                        col[j]=0;
                    }
                }
            }
        }
        return ans;
        
    }
};