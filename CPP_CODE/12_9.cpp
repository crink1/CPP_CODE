//class Solution {
//public:
//    vector<vector<int>> ret;
//    int m = 0;
//    int n = 0;
//    int dx[4] = { 0,0,-1,1 };
//    int dy[4] = { -1,1,0,0 };
//
//    void dfs(vector<vector<int>>& heights, int i, int j, vector<vector<bool>>& vv)
//    {
//        vv[i][j] = true;
//
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//            if (x < m && x >= 0 && y < n && y >= 0 && heights[x][y] >= heights[i][j] && !vv[x][y])
//            {
//
//                dfs(heights, x, y, vv);
//
//            }
//        }
//    }
//
//    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
//        m = heights.size();
//        n = heights[0].size();
//        vector<vector<bool>> pac(m, vector<bool>(n));
//        vector<vector<bool>> atl(m, vector<bool>(n));
//        for (int i = 0; i < m; i++)
//        {
//            dfs(heights, i, 0, pac);
//        }
//        for (int i = 0; i < n; i++)
//        {
//            dfs(heights, 0, i, pac);
//        }
//        for (int i = 0; i < m; i++)
//        {
//            dfs(heights, i, n - 1, atl);
//        }
//        for (int i = 0; i < n; i++)
//        {
//            dfs(heights, m - 1, i, atl);
//        }
//
//
//
//
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (pac[i][j] && atl[i][j])
//                {
//                    ret.push_back({ i,j });
//                }
//
//            }
//        }
//
//        return ret;
//    }
//};