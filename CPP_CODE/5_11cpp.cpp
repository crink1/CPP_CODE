//class Solution {
//public:
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { 1,-1,0,0 };
//    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//        int m = image.size();
//        int n = image[0].size();
//        int cl = image[sr][sc];
//        if (cl == color)
//        {
//            return image;
//        }
//        queue<pair<int, int>> q;
//        q.push({ sr,sc });
//        while (q.size())
//        {
//
//            pair<int, int> p = q.front();
//            q.pop();
//            image[p.first][p.second] = color;
//            for (int k = 0; k < 4; k++)
//            {
//                int x = p.first + dx[k];
//                int y = p.second + dy[k];
//                if (x >= 0 && x < m && y >= 0 && y < n && image[x][y] == cl)
//                {
//                    q.push({ x,y });
//                }
//            }
//
//
//        }
//        return image;
//
//    }
//};