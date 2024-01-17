//class Solution {
//public:
//    int minCut(string s) {
//        int n = s.size();
//        vector<vector<bool>> ispal(n, vector<bool>(n));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j])
//                {
//                    if (i + 1 < j)
//                    {
//                        ispal[i][j] = ispal[i + 1][j - 1];
//                    }
//                    else
//                    {
//                        ispal[i][j] = true;
//                    }
//                }
//            }
//        }
//        vector<int> dp(n, INT_MAX);
//        for (int i = 0; i < n; i++)
//        {
//            if (ispal[0][i])
//            {
//                dp[i] = 0;
//            }
//            else
//            {
//                for (int j = 1; j <= i; j++)
//                {
//                    if (ispal[j][i])
//                    {
//                        dp[i] = min(dp[i], dp[j - 1] + 1);
//                    }
//                }
//            }
//        }
//        return dp[n - 1];
//    }
//};