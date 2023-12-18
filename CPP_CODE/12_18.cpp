//class Solution {
//public:
//    int jewelleryValue(vector<vector<int>>& frame) {
//        int m = frame.size();
//        int n = frame[0].size();
//
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + frame[i - 1][j - 1];
//            }
//        }
//        return dp[m][n];
//    }
//};

//class Solution {
//public:
//    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//        vector<vector<int>> dp(obstacleGrid.size() + 1, vector<int>(obstacleGrid[0].size() + 1));
//        int m = obstacleGrid.size();
//        int n = obstacleGrid[0].size();
//        dp[0][1] = 1;
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                if (obstacleGrid[i - 1][j - 1] == 1)
//                {
//                    dp[i][j] = 0;
//                }
//                else
//                {
//                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//                }
//            }
//        }
//        return dp[m][n];
//    }
//};