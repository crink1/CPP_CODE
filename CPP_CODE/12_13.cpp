//class Solution {
//public:
//    int m = 0;
//    int n = 0;
//
//    int dx[4] = { 0,0,1,-1 };
//    int dy[4] = { -1,1,0,0 };
//    int dp[201][201];
//    int dfs(vector<vector<int>>& matrix, int i, int j)
//    {
//
//        if (dp[i][j] > 0)
//        {
//            return dp[i][j];
//        }
//
//        int ret = 1;
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k];
//            int y = j + dy[k];
//
//            if (x >= 0 && x < m && y >= 0 && y < n && matrix[x][y] > matrix[i][j])
//            {
//                int t = dfs(matrix, x, y);
//                ret = max(ret, t + 1);
//            }
//        }
//        dp[i][j] = ret;
//        return ret;
//
//    }
//    int longestIncreasingPath(vector<vector<int>>& matrix) {
//        m = matrix.size();
//        n = matrix[0].size();
//        int ret = 0;
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                int t = dfs(matrix, i, j);
//                ret = max(ret, t);
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int dp[201][201];
//    int dfs(int left, int right)
//    {
//        if (left >= right)
//        {
//            return 0;
//        }
//        if (dp[left][right] > 0)
//        {
//            return dp[left][right];
//        }
//        int ret = INT_MAX;
//        for (int i = left; i <= right; i++)
//        {
//            int x = dfs(left, i - 1);
//            int y = dfs(i + 1, right);
//            ret = min(ret, i + max(x, y));
//        }
//        dp[left][right] = ret;
//        return ret;
//    }
//
//    int getMoneyAmount(int n) {
//        return dfs(1, n);
//    }
//};