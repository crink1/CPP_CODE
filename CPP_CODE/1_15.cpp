//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        int begin = 0;
//        int len = 0;
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
//                if (dp[i][j] == true && j - i + 1 > len)
//                {
//
//                    begin = i;
//                    len = j - i + 1;
//
//                }
//            }
//        }
//        return s.substr(begin, len);
//    }
//};