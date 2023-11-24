Given an 'N' x 'M' integer matrix, if an element is O, set its entire
row and column to O's, and return the matrix. In particular, your
task is to modify it in such a way that if a cell has a value O
(matrix[i]j] O), then all the cells of the ith row and jth column
should be changed to O.
You must do it in place.
For Example:
If the given grid is this:
[7, 19, 3]
[4, 21, 0]
Then the modified grid will be:
[7, 19, 0]
[0, 0, 0]
Answer:
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int m = matrix.size();
        int n = matrix[0].size();

        vector<bool> rowZero(m, false);
        vector<bool> colZero(n, false);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    rowZero[i] = true;
                    colZero[j] = true;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rowZero[i] || colZero[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
}
