class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<vector<int>> rows(9, vector<int>(10, 0));
        vector<vector<int>> cols(9, vector<int>(10, 0));
        vector<vector<int>> boxes(9, vector<int>(10, 0));

        
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                
                
                if (board[r][c] == '.') {
                    continue; 
                }

                
                int num = board[r][c] - '0';
                
                
                int box_index = (r / 3) * 3 + (c / 3);

                
                if (rows[r][num] == 1 || cols[c][num] == 1 || boxes[box_index][num] == 1) {
                    return false;
                }

                
                rows[r][num] = 1;
                cols[c][num] = 1;
                boxes[box_index][num] = 1;
            }
        }
        
        return true;
    }
};
