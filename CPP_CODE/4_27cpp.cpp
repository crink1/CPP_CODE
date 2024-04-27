//class Solution {
//public:
//    vector<int> findColumnWidth(vector<vector<int>>& grid) {
//        int n = grid.size(), m = grid[0].size();
//        vector<int> res(m);
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                int x = grid[i][j];
//                int length = 0;
//                if (x <= 0) {
//                    length = 1;
//                }
//                while (x != 0) {
//                    length += 1;
//                    x /= 10;
//                }
//                res[j] = max(res[j], length);
//            }
//        }
//        return res;
//    }
//};