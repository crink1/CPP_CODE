//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n + 1);
//        for (int i = 1; i <= n; i++)
//        {
//            dp[i] = max(nums[i - 1], dp[i - 1] + nums[i - 1]);
//        }
//        int ret = INT_MIN;
//        for (int i = 1; i <= n; i++)
//        {
//            ret = max(ret, dp[i]);
//        }
//
//        return ret;
//    }
//};

//class Solution {
//public:
//    int maxSubarraySumCircular(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n + 1);
//        auto g = f;
//        int maxv = INT_MIN;
//        int minv = INT_MAX;
//        int sum = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            sum += nums[i - 1];
//            f[i] = max(f[i - 1] + nums[i - 1], nums[i - 1]);
//            g[i] = min(g[i - 1] + nums[i - 1], nums[i - 1]);
//            maxv = max(maxv, f[i]);
//            minv = min(minv, g[i]);
//        }
//        cout << maxv << minv << sum << endl;
//        if (sum == minv)
//        {
//            return maxv;
//        }
//        return max(maxv, sum - minv);
//    }
//};