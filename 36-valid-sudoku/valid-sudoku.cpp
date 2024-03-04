class Solution {
public:
    bool checkcol(vector<vector<char>>& grid, int row, int col, char &val) {
        for (int i = 0; i < 9; ++i) {
            if (grid[i][col] == val && i != row) {
                return false;
            }
        }
        return true;
    }
    
    bool checkrow(vector<vector<char>>& grid, int row, int col, char &val) {
        for (int j = 0; j < 9; ++j) {
            if (grid[row][j] == val && j != col) {
                return false; 
            }
        }
        return true; 
    }

    bool checkBox(vector<vector<char>>& grid, int row, int col, char &val) {
        unordered_set<char> seen;
        for (int i = row; i < row + 3; ++i) {
            for (int j = col; j < col + 3; ++j) {
                if (grid[i][j] != '.' && seen.find(grid[i][j]) != seen.end()) {
                    return false;
                }
                seen.insert(grid[i][j]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[i][j] != '.') {
                    if (!checkrow(board, i, j, board[i][j]) || 
                        !checkcol(board, i, j, board[i][j]) || 
                        !checkBox(board, i - i % 3, j - j % 3, board[i][j])) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};