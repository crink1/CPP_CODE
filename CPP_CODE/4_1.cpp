//class Solution {
//public:
//    const int MOD = 1e9 + 7;
//    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//        int m = group.size();
//        vector<vector<int>> dp(n + 1, vector<int>(minProfit + 1));
//        for (int j = 0; j <= n; j++)
//        {
//            dp[j][0] = 1;
//        }
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = n; j >= group[i - 1]; j--)
//            {
//                for (int k = minProfit; k >= 0; k--)
//                {
//
//                    dp[j][k] += dp[j - group[i - 1]][max(0, k - profit[i - 1])];
//                    dp[j][k] %= MOD;
//
//                }
//            }
//        }
//        return dp[n][minProfit];
//    }
//};