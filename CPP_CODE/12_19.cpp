//class Solution {
//public:
//    int minFallingPathSum(vector<vector<int>>& matrix) {
//        int m = matrix.size();
//        int n = matrix[0].size();
//        vector<vector<int>> dp(m + 1, vector<int>(n + 2, INT_MAX));
//
//        for (int i = 0; i <= m; i++)
//        {
//            dp[0][i] = 0;
//        }
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i - 1][j + 1])) + matrix[i - 1][j - 1];
//            }
//        }
//        int ret = INT_MAX;
//        for (int i = 1; i <= n; i++)
//        {
//            ret = min(ret, dp[m][i]);
//        }
//        return ret;
//    }
//};