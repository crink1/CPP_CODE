//class Solution {
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        int n = coins.size();
//        vector<int> dp(amount + 1, 0x3f3f3f3f);
//        dp[0] = 0;
//
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = coins[i - 1]; j <= amount; j++)
//            {
//
//
//                dp[j] = min(dp[j], dp[j - coins[i - 1]] + 1);
//
//            }
//        }
//        return dp[amount] == 0x3f3f3f3f ? -1 : dp[amount];
//    }
//};