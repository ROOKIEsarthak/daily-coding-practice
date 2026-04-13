class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> rows(9), cols(9), boxes(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;
                char val = board[i][j];
                int boxVal = (i / 3) * 3 + (j / 3);

                if(rows[i].count(val) || cols[j].count(val) || boxes[boxVal].count(val)){
                    return false;
                } 
                rows[i].insert(val);
                cols[j].insert(val); 
                boxes[boxVal].insert(val); 
            }
        }
        return true;
    }
};
