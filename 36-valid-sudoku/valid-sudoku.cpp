class Solution {
public:
    bool checkcol(vector<vector<char>>& grid, int row, int col, char &val) {
        while (col <= 8) {
            if (grid[row][col] != val) {
                col++;
            } else {
                break;
            }
        }
        return (col - 1) == 8;
    }
    
    bool checkrow(vector<vector<char>>& grid, int row, int col, char &val) {
        while (row <= 8) {
            if (grid[row][col] != val) {
                row++;
            } else {
                break;
            }
        }
        return (row - 1) == 8;
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
        int c = 0, d = 0;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] != '.') {
                    if (checkrow(board, i + 1, j, board[i][j]) && 
                        checkcol(board, i, j + 1, board[i][j]) && 
                        checkBox(board, i - i % 3, j - j % 3, board[i][j])) {
                        c++;
                    }
                    d++;
                }
            }
        }
        cout << d << " " << c;
        return d == c;
    }
};