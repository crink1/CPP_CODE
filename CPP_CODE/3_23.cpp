//class Solution {
//public:
//    int lastStoneWeightII(vector<int>& stones) {
//        int n = stones.size();
//        int sum = 0;
//        for (auto& i : stones)
//        {
//            sum += i;
//        }
//        int ret = sum;
//        sum /= 2;
//        vector<int> dp(sum + 1);
//
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = sum; j >= stones[i - 1]; j--)
//            {
//                dp[j] = dp[j];
//
//                dp[j] = max(dp[j], dp[j - stones[i - 1]] + stones[i - 1]);
//
//            }
//        }
//        return ret - dp[sum] * 2;
//    }
//};