//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum = 0;
//        for (auto& i : nums)
//        {
//            sum += i;
//        }
//        if (sum % 2 == 1)
//        {
//            return false;
//        }
//        sum /= 2;
//        int n = nums.size();
//        vector<bool> dp(sum + 1);
//        dp[0] = true;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = sum; j - nums[i - 1] >= 0; j--)
//            {
//
//
//                dp[j] = dp[j] || dp[j - nums[i - 1]];
//
//            }
//        }
//        return dp[sum];
//
//    }
//};