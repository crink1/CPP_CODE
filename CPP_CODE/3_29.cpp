//class Solution {
//public:
//    int numSquares(int n) {
//        vector<int> dp(n + 1, 0x3f3f3f3f);
//        dp[0] = 0;
//        for (int i = 1; i <= sqrt(n); i++)
//        {
//            for (int j = i * i; j <= n; j++)
//            {
//
//                dp[j] = min(dp[j], dp[j - i * i] + 1);
//
//            }
//        }
//        return dp[n];
//    }
//};