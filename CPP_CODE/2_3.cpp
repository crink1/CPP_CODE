//class Solution {
//public:
//    int minimumDeleteSum(string s1, string s2) {
//        int m = s1.size();
//        int n = s2.size();
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                if (s1[i - 1] == s2[j - 1])
//                {
//                    dp[i][j] = dp[i - 1][j - 1] + s1[i - 1];
//                }
//                dp[i][j] = max(dp[i - 1][j], max(dp[i][j - 1], dp[i][j]));
//            }
//        }
//        int sum = 0;
//        for (auto& i : s1)
//        {
//            sum += i;
//        }
//        for (auto& i : s2)
//        {
//            sum += i;
//        }
//        return sum - dp[m][n] - dp[m][n];
//    }
//};