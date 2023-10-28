Write a program to solve a Sudoku puzzle by filling the empty cells.
A sudoku solution must satisfy all of the following rules:
1. Each of the digits 11-9 must occur exactly once in each row.
2. Each of the digits 1—9 must occur exactly once in each column.
3. Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
The character '.' indicates empty cells.

class Solution {
public:
    bool unAssignedCell(vector<vector<char>>& board, int& row, int& col) {
        for (row = 0; row < 9; row++) {
            for (col = 0; col < 9; col++) {
                if (board[row][col] == '.')
                    return true;
            }
        }
        return false;
    }

    bool checkRow(vector<vector<char>>& board, int row, char num) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num)
                return false;
        }
        return true;
    }

    bool checkCol(vector<vector<char>>& board, int col, char num) {
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num)
                return false;
        }
        return true;
    }

    bool checkSubMatrix(vector<vector<char>>& board, int row, int col, char num) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[row + i][col + j] == num)
                    return false;
            }
        }
        return true;
    }

    bool isSafe(vector<vector<char>>& board, int row, int col, char num) {
        return checkRow(board, row, num) && checkCol(board, col, num) &&
               checkSubMatrix(board, row - row % 3, col - col % 3, num) &&
               board[row][col] == '.';
    }

    bool solveSudoku(vector<vector<char>>& board) {
        int row, col;

        if (!unAssignedCell(board, row, col)) {
            return true;  
        }

        for (char num = '1'; num <= '9'; num++) {
            if (isSafe(board, row, col, num)) {
                board[row][col] = num;
                if (solveSudoku(board)) {
                    return true;  
                }
                board[row][col] = '.';  
            }
        }

        return false;  
    }
};

