//class Solution {
//public:
//    int minTrioDegree(int n, vector<vector<int>>& edges) {
//        vector<vector<int>> g(n, vector<int>(n));
//        vector<int> degree(n);
//
//        for (auto&& edge : edges) {
//            int x = edge[0] - 1, y = edge[1] - 1;
//            g[x][y] = g[y][x] = 1;
//            ++degree[x];
//            ++degree[y];
//        }
//
//        int ans = INT_MAX;
//        for (int i = 0; i < n; ++i) {
//            for (int j = i + 1; j < n; ++j) {
//                if (g[i][j] == 1) {
//                    for (int k = j + 1; k < n; ++k) {
//                        if (g[i][k] == 1 && g[j][k] == 1) {
//                            ans = min(ans, degree[i] + degree[j] + degree[k] - 6);
//                        }
//                    }
//                }
//            }
//        }
//
//        return ans == INT_MAX ? -1 : ans;
//    }
//};
