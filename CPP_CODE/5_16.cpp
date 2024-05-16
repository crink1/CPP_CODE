//class Solution {
//public:
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
//        int ret = 1;
//        int m = maze.size();
//        int n = maze[0].size();
//        vector<vector<bool>> vis(m, vector<bool>(n, false));
//        queue<pair<int, int>> q;
//        int cnt = 1;
//        q.push({ entrance[0], entrance[1] });
//        vis[entrance[0]][entrance[1]] = true;
//        while (q.size())
//        {
//            for (int i = 0; i < cnt; i++)
//            {
//                auto [x1, y1] = q.front();
//                q.pop();
//                for (int k = 0; k < 4; k++)
//                {
//                    int x = x1 + dx[k];
//                    int y = y1 + dy[k];
//                    if (x >= 0 && x < m && y >= 0 && y < n && maze[x][y] == '.' && vis[x][y] == false)
//                    {
//                        vis[x][y] = true;
//                        if (x == 0 || y == 0 || x == m - 1 || y == n - 1)
//                        {
//                            return ret;
//                        }
//                        q.push({ x,y });
//                    }
//                }
//
//            }
//            ret++;
//            cnt = q.size();
//        }
//        return -1;
//
//    }
//};