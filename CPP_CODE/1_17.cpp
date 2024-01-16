//class Solution {
//public:
//    bool checkPartitioning(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j])
//                {
//                    if (i + 1 < j)
//                    {
//                        dp[i][j] = dp[i + 1][j - 1];
//                    }
//                    else
//                    {
//                        dp[i][j] = true;
//                    }
//                }
//            }
//        }
//        for (int i = 1; i < n - 1; i++)
//        {
//            for (int j = i; j < n - 1; j++)
//            {
//                if (dp[0][i - 1] && dp[i][j] && dp[j + 1][n - 1])
//                {
//                    return true;
//                }
//            }
//        }
//        return false;
//    }
//};