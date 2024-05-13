//class Solution {
//public:
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//    int numIslands(vector<vector<char>>& grid) {
//        int m = grid.size();
//        int n = grid[0].size();
//        vector<vector<bool>> rs(m, vector<bool>(n, false));
//
//        queue<pair<int, int>> q;
//
//
//        int cnt = 0;
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (rs[i][j] == false && grid[i][j] == '1')
//                {
//                    q.push({ i,j });
//                    rs[i][j] = true;
//                    cnt++;
//                    while (q.size())
//                    {
//                        pair<int, int> tmp = q.front();
//                        q.pop();
//                        for (int k = 0; k < 4; k++)
//                        {
//                            int x = tmp.first + dx[k];
//                            int y = tmp.second + dy[k];
//                            if (x >= 0 && x < m && y >= 0 && y < n && rs[x][y] == false && grid[x][y] == '1')
//                            {
//
//                                rs[x][y] = true;
//                                q.push({ x,y });
//
//                            }
//                        }
//                    }
//                }
//            }
//        }
//
//        return cnt;
//    }
//};