//class Solution {
//public:
//    vector<vector<int>> ret;
//    int m = 0;
//    int n = 0;
//    int r = 0;
//    int l = 0;
//    int dx[4] = { 0,0,-1,1 };
//    int dy[4] = { -1,1,0,0 };
//    vector<vector<bool>> vis;
//    void dfs(vector<vector<int>>& heights, int i, int j)
//    {
//
//
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x >= m || y >= n)
//            {
//                l = 1;
//            }
//            if (x < 0 || y < 0)
//            {
//
//                r = 1;
//            }
//            if (l == 1 && r == 1)
//            {
//                return;
//            }
//            if (x < m && x >= 0 && y < n && y >= 0 && heights[x][y] <= heights[i][j] && !vis[x][y])
//            {
//                vis[x][y] = true;
//                dfs(heights, x, y);
//                vis[x][y] = false;
//            }
//        }
//    }
//
//    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
//        m = heights.size();
//        n = heights[0].size();
//        vis.resize(m);
//        for (auto& e : vis)
//        {
//            e.resize(n);
//        }
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                r = 0;
//                l = 0;
//                vis[i][j] = true;
//                dfs(heights, i, j);
//                vis[i][j] = false;
//                if (l == 1 && r == 1)
//                {
//                    ret.push_back({ i,j });
//                }
//            }
//        }
//
//        return ret;
//    }
//};