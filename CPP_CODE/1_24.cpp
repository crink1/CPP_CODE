//class Solution {
//public:
//    int numDistinct(string s, string t) {
//        int m = t.size();
//        int n = s.size();
//        vector<vector<double>> dp(m + 1, vector<double>(n + 1));
//        s = " " + s;
//        t = " " + t;
//        for (int j = 0; j < n; j++)
//        {
//            dp[0][j] = 1;
//        }
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                if (t[i] == s[j])
//                {
//                    dp[i][j] += dp[i - 1][j - 1];
//                }
//                dp[i][j] += dp[i][j - 1];
//            }
//        }
//        return dp[m][n];
//    }
//};