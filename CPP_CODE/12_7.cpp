//class Solution {
//public:
//    int m = 0;
//    int n = 0;
//    int dx[4] = { 0, 0, 1, -1 };
//    int dy[4] = { 1, -1, 0, 0 };
//    void dfs(vector<vector<char>>& board, int i, int j)
//    {
//        if (board[i][j] == 'O')
//        {
//            board[i][j] = '.';
//        }
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= 0 && x < m && y >= 0 && y < n && board[x][y] == 'O')
//            {
//
//                dfs(board, x, y);
//            }
//        }
//    }
//    void solve(vector<vector<char>>& board) {
//        m = board.size();
//        n = board[0].size();
//        for (int i = 0; i < m; i++)
//        {
//            if (board[i][0] == 'O')
//            {
//                dfs(board, i, 0);
//            }
//            if (board[i][n - 1] == 'O')
//            {
//                dfs(board, i, n - 1);
//            }
//        }
//        for (int j = 0; j < n; j++)
//        {
//            if (board[0][j] == 'O')
//            {
//                dfs(board, 0, j);
//            }
//            if (board[m - 1][j] == 'O')
//            {
//                dfs(board, m - 1, j);
//            }
//        }
//        for (auto& e : board)
//        {
//            for (auto& i : e)
//            {
//                if (i == 'O')
//                {
//                    i = 'X';
//                }
//                if (i == '.')
//                {
//                    i = 'O';
//                }
//
//            }
//        }
//    }
//};