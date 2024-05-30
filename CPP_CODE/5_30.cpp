//class Solution {
//public:
//
//    int m, n;
//
//
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//    bool vis[51][51];
//    int bfs(vector<vector<int>>& f, int bx, int by, int x, int y)
//    {
//        memset(vis, false, sizeof(vis));
//        if (bx == x && by == y)
//        {
//            return 0;
//        }
//        queue<pair<int, int>> q;
//        q.push({ bx, by });
//        vis[bx][by] = true;
//        int ret = 0;
//        while (q.size())
//        {
//            ret++;
//            int sz = q.size();
//            while (sz--)
//            {
//                pair<int, int> tmp = q.front();
//                q.pop();
//                for (int k = 0; k < 4; k++)
//                {
//                    int i = tmp.first + dx[k];
//                    int j = tmp.second + dy[k];
//
//                    if (i >= 0 && i < m && j >= 0 && j < n && f[i][j] >= 1 && vis[i][j] == false)
//                    {
//                        if (i == x && j == y)
//                        {
//                            return ret;
//                        }
//                        q.push({ i,j });
//                        vis[i][j] = true;
//                    }
//                }
//            }
//
//
//        }
//        return -1;
//    }
//
//    int cutOffTree(vector<vector<int>>& f) {
//        m = f.size();
//        n = f[0].size();
//
//        vector<pair<int, int>> v;
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (f[i][j] > 1)
//                {
//                    v.push_back({ i,j });
//                }
//            }
//        }
//
//        sort(v.begin(), v.end(), [&](pair<int, int>& x, pair<int, int>& y) {
//            return f[x.first][x.second] < f[y.first][y.second];
//            });
//
//
//        int bx = 0, by = 0;
//        int ret = 0;
//        for (auto& [x, y] : v)
//        {
//            int step = bfs(f, bx, by, x, y);
//            if (step == -1)
//            {
//                return -1;
//            }
//            ret += step;
//            bx = x;
//            by = y;
//        }
//        return ret;
//
//        return 0;
//    }
//};