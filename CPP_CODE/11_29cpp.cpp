//class Solution {
//public:
//    bool row[9][10] = { false };
//    bool col[9][10] = { false };
//    bool s[3][3][10] = { false };
//
//
//    bool dfs(vector<vector<char>>& board)
//    {
//        for (int i = 0; i < 9; i++)
//        {
//            for (int j = 0; j < 9; j++)
//            {
//                if (board[i][j] == '.')
//                {
//
//                    for (int k = 1; k < 10; k++)
//                    {
//                        if (row[i][k] == false && col[j][k] == false && s[i / 3][j / 3][k] == false)
//                        {
//                            board[i][j] = k + '0';
//                            row[i][k] = col[j][k] = s[i / 3][j / 3][k] = true;
//                            if (dfs(board) == true)
//                            {
//                                return true;
//                            }
//                            board[i][j] = '.';
//                            row[i][k] = col[j][k] = s[i / 3][j / 3][k] = false;
//                        }
//
//
//
//                    }
//                    return false;
//                }
//            }
//        }
//        return true;
//    }
//
//    void solveSudoku(vector<vector<char>>& board) {
//
//        for (int i = 0; i < 9; i++)
//        {
//            for (int j = 0; j < 9; j++)
//            {
//
//                if (board[i][j] != '.')
//                {
//                    int n = board[i][j] - '0';
//                    row[i][n] = col[j][n] = s[i / 3][j / 3][n] = true;
//                }
//            }
//
//        }
//        dfs(board);
//
//    }
//};