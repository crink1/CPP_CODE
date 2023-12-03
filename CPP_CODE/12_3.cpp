//class Solution {
//public:
//    bool vis[16][16] = { false };
//    int m, n;
//    int ret = 0;
//
//    void dfs(vector<vector<int>>& grid, int i, int j, int sum)
//    {
//        ret = max(ret, sum);
//        int dy[4] = { -1,1,0,0 };
//        int dx[4] = { 0,0,-1,1 };
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y] && grid[x][y])
//            {
//                vis[x][y] = true;
//                dfs(grid, x, y, sum + grid[x][y]);
//                vis[x][y] = false;
//
//            }
//        }
//    }
//
//    int getMaximumGold(vector<vector<int>>& grid) {
//        m = grid.size();
//        n = grid[0].size();
//        for (int i = 0; i < grid.size(); i++)
//        {
//            for (int j = 0; j < grid[0].size(); j++)
//            {
//                if (grid[i][j] != 0)
//                {
//                    vis[i][j] = true;
//
//                    dfs(grid, i, j, grid[i][j]);
//                    vis[i][j] = false;
//
//                }
//            }
//        }
//        return ret;
//    }
//};