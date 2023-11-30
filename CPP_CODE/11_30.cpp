//class Solution {
//public:
//
//    vector<vector<bool>> check;
//    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int pos)
//    {
//        if (pos == word.size())
//        {
//            return true;
//        }
//        int dy[4] = { -1,1,0,0 };
//        int dx[4] = { 0,0,-1,1 };
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= 0 && x < board.size() && y >= 0 && y < board[0].size() && word[pos] == board[x][y] && !check[x][y])
//            {
//                check[x][y] = true;
//                if (dfs(board, word, x, y, pos + 1))
//                {
//                    return true;
//                }
//
//                check[x][y] = false;
//            }
//        }
//
//        return false;
//
//    }
//
//    bool exist(vector<vector<char>>& board, string word) {
//        check.resize(board.size());
//        for (auto& e : check)
//        {
//            e.resize(board[0].size());
//        }
//        for (int i = 0; i < board.size(); i++)
//        {
//            for (int j = 0; j < board[0].size(); j++)
//            {
//                if (board[i][j] == word[0])
//                {
//                    check[i][j] = true;
//                    if (dfs(board, word, i, j, 1))
//                    {
//                        return true;
//                    }
//                    check[i][j] = false;
//                }
//            }
//        }
//        return false;
//
//    }
//};class Solution {
//public:
//
//    vector<vector<bool>> check;
//    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int pos)
//    {
//        if (pos == word.size())
//        {
//            return true;
//        }
//        int dy[4] = { -1,1,0,0 };
//        int dx[4] = { 0,0,-1,1 };
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= 0 && x < board.size() && y >= 0 && y < board[0].size() && word[pos] == board[x][y] && !check[x][y])
//            {
//                check[x][y] = true;
//                if (dfs(board, word, x, y, pos + 1))
//                {
//                    return true;
//                }
//
//                check[x][y] = false;
//            }
//        }
//
//        return false;
//
//    }
//
//    bool exist(vector<vector<char>>& board, string word) {
//        check.resize(board.size());
//        for (auto& e : check)
//        {
//            e.resize(board[0].size());
//        }
//        for (int i = 0; i < board.size(); i++)
//        {
//            for (int j = 0; j < board[0].size(); j++)
//            {
//                if (board[i][j] == word[0])
//                {
//                    check[i][j] = true;
//                    if (dfs(board, word, i, j, 1))
//                    {
//                        return true;
//                    }
//                    check[i][j] = false;
//                }
//            }
//        }
//        return false;
//
//    }
//};