//class Solution {
//public:
//    int m = 0;
//    int n = 0;
//    int dx[8] = { 0,0,-1,1,1,-1,1,-1 };
//    int dy[8] = { -1,1,0,0,-1,1,1,-1 };
//    void dfs(vector<vector<char>>& board, int i, int j)
//    {
//        int count = 0;
//        for (int k = 0; k < 8; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= 0 && x < m && y >= 0 && y < n && board[x][y] == 'M')
//            {
//                count++;
//            }
//
//        }
//        if (count > 0)
//        {
//            board[i][j] = '0' + count;
//            return;
//        }
//        else
//        {
//            board[i][j] = 'B';
//            for (int k = 0; k < 8; k++)
//            {
//                int x = i + dx[k];
//                int y = j + dy[k];
//                if (x >= 0 && x < m && y >= 0 && y < n && board[x][y] == 'E')
//                {
//                    dfs(board, x, y);
//                }
//
//            }
//        }
//    }
//    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
//        if (board[click[0]][click[1]] == 'M')
//        {
//            board[click[0]][click[1]] = 'X';
//            return board;
//        }
//        else
//        {
//            m = board.size();
//            n = board[0].size();
//            dfs(board, click[0], click[1]);
//        }
//        return board;
//    }
//};

//class Solution {
//public:
//    int ret = 0;
//    int m = 0;
//    int n = 0;
//    int dx[4] = { 0,0,-1,1 };
//    int dy[4] = { -1,1,0,0 };
//    bool vis[101][101] = { false };
//    int digit(int x)
//    {
//        int sum = 0;
//        while (x > 0)
//        {
//            sum += x % 10;
//            x = x / 10;
//        }
//        return sum;
//    }
//
//    void dfs(int i, int j, int cnt)
//    {
//        ret++;
//        vis[i][j] = true;
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y] && (digit(x) + digit(y)) <= cnt)
//            {
//                dfs(x, y, cnt);
//            }
//        }
//
//
//    }
//
//    int wardrobeFinishing(int m1, int n1, int cnt) {
//        m = m1;
//        n = n1;
//        dfs(0, 0, cnt);
//        return ret;
//    }
//};