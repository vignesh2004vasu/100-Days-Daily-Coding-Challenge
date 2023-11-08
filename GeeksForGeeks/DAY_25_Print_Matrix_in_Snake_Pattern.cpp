Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.
nput:
N = 3 
matrix[][] = {{45, 48, 54},
             {21, 89, 87}
             {70, 78, 15}}
Output: 
45 48 54 87 89 21 70 78 15 
Explanation:
Matrix is as below:
45 48 54
21 89 87
70 78 15
Printing it in snake pattern will lead to 
the output as 45 48 54 87 89 21 70 78 15.
Answer:
class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        int n = matrix.size();
      int m = matrix[0].size();
      vector<int> result;
    
      bool rightToLeft = true;
      for (int i = 0; i < n; i++) {
        if (rightToLeft) {
          for (int j = 0; j < m; j++) {
            result.push_back(matrix[i][j]);
          }
        } else {
          for (int j = m - 1; j >= 0; j--) {
            result.push_back(matrix[i][j]);
          }
        }
        rightToLeft = !rightToLeft;
      }
    
      return result;
    }
};
