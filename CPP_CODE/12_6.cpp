//class Solution {
//public:
//    int max = 0;
//    int m = 0;
//    int n = 0;
//    bool vis[50][50] = { false };
//    int dx[4] = { -1,1,0,0 };
//    int dy[4] = { 0,0,1,-1 };
//    int count = 0;
//    void dfs(vector<vector<int>>& grid, int i, int j)
//    {
//        count++;
//        if (count > max)
//        {
//            max = count;
//        }
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y] && grid[x][y] == 1)
//            {
//                vis[x][y] = true;
//                dfs(grid, x, y);
//            }
//        }
//    }
//
//    int maxAreaOfIsland(vector<vector<int>>& grid)
//    {
//        m = grid.size();
//        n = grid[0].size();
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (grid[i][j] == 1 && !vis[i][j])
//                {
//                    vis[i][j] = true;
//                    count = 0;
//                    dfs(grid, i, j);
//                }
//            }
//        }
//        return max;
//    }
//};