//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        s = " " + s;
//        p = " " + p;
//        int m = s.size();
//        int n = p.size();
//
//        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1));
//        dp[0][0] = true;
//        for (int j = 2; j <= n; j += 2)
//        {
//            if (p[j] == '*')
//            {
//                dp[0][j] = true;
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                if (p[j] == '.' || s[i] == p[j])
//                {
//                    if (dp[i - 1][j - 1] == true)
//                    {
//                        dp[i][j] = true;
//                    }
//                }
//                else if (p[j] == '*')
//                {
//                    if (dp[i][j - 2] || ((p[j - 1] == '.' || p[j - 1] == s[i]) && dp[i - 1][j]))
//                    {
//                        dp[i][j] = true;
//                    }
//                }
//            }
//        }
//        return dp[m][n];
//    }
//};