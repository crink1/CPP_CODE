//#include <iostream>
//#include <vector>
//using namespace std;
//
//void generate(vector<vector<int>>& vv, int numRows) {
//
//    vv.resize(numRows);
//
//    for (size_t i = 0; i < vv.size(); i++)
//    {
//        vv[i].resize(i + 1, 0);
//        vv[i][0] = vv[i][vv[i].size() - 1] = 1;
//    }
//    for (size_t i = 0; i < vv.size(); i++)
//    {
//        for (size_t j = 0; j < vv[i].size(); j++)
//        {
//            if (vv[i][j] == 0)
//            {
//                vv[i][j] = vv[i - 1][j] + vv[i - 1][j - 1];
//
//            }
//        }
//    }
//
//
//}
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<vector<int>> ret;
//    generate(ret, n);
//    for (auto& i : ret)
//    {
//        for (auto& j : i)
//        {
//            printf("%5d", j);
//        }
//        cout << endl;
//    }
//
//}
//// 64 位输出请用 printf("%lld")
//
//
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param board string字符串vector
//     * @param word string字符串
//     * @return bool布尔型
//     */
//
//    int m, n;
//    int dx[4] = { 0,0,-1,1 };
//    int dy[4] = { -1,1,0,0 };
//
//    bool dfs(vector<string>& board, int pos, string word, int i, int j, vector<vector<bool>>& vis)
//    {
//        if (word[pos] != board[i][j])
//        {
//            return false;
//        }
//        if (pos == word.size() - 1)
//        {
//            return true;
//        }
//
//
//
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//
//            if (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y])
//            {
//                vis[x][y] = true;
//
//                if (dfs(board, pos + 1, word, x, y, vis))
//                {
//                    return true;
//                }
//
//                vis[x][y] = false;
//
//            }
//        }
//
//        return false;
//
//
//    }
//
//    bool exist(vector<string>& board, string word) {
//        m = board.size();
//        n = board[0].size();
//        vector<vector<bool>> vis(m, vector<bool>(n, false));
//
//
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//
//                vis[i][j] = true;
//                if (dfs(board, 0, word, i, j, vis))
//                {
//                    return true;
//                }
//
//                vis[i][j] = false;
//
//            }
//        }
//        return false;
//    }
//};
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a = 0;
//    int b = 1;
//    int c = 1;
//
//    int n = 0;
//    cin >> n;
//
//
//
//    int i = 2;
//    for (; ; i++)
//    {
//        a = b;
//        b = c;
//        c = a + b;
//        if (n <= c)
//        {
//
//            break;
//        }
//
//    }
//    cout << min(c - n, n - b);
//    return 0;
//}
//// 64 位输出请用 printf("%lld")