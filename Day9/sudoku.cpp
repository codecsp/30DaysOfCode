// submitted at leetcode: https://leetcode.com/problems/valid-sudoku/submissions/


class Solution
{
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        vector<vector<int>> forRow(9, vector<int>(10));
        vector<vector<int>> forCol(9, vector<int>(10));
        vector<vector<int>> forGrid(9, vector<int>(10));

        int val;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    val = board[i][j] - '0';

                    if (forRow[i][val])
                        return false;
                    else
                        forRow[i][val] = 1;

                    if (forCol[j][val])
                        return false;
                    else
                        forCol[j][val] = 1;

                    if (forGrid[(i / 3) * 3 + (j / 3)][val])
                        return false;
                    else
                        forGrid[(i / 3) * 3 + (j / 3)][val] = 1;
                }
            }
        }

        return true;
    }
};