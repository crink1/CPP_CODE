//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int ret = 0;
//        vector<int> dp(nums.size(), 1);
//        for (int i = nums.size() - 1; i >= 0; i--)
//        {
//            for (int j = i + 1; j < nums.size(); j++)
//            {
//                if (nums[j] > nums[i])
//                {
//                    dp[i] = max(dp[i], dp[j] + 1);
//                }
//            }
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int n = 0;
//
//    int dfs(vector<int>& nums, int pos, vector<int>& m)
//    {
//        if (m[pos] != 0)
//        {
//            return m[pos];
//        }
//        int ret = 1;
//
//        for (int i = pos + 1; i < n; i++)
//        {
//            if (nums[i] > nums[pos])
//            {
//                int tmp = dfs(nums, i, m);
//                if (tmp + 1 > ret)
//                {
//                    ret = tmp + 1;
//                }
//            }
//        }
//        m[pos] = ret;
//        return ret;
//
//    }
//
//    int lengthOfLIS(vector<int>& nums) {
//        n = nums.size();
//        int ret = 0;
//        vector<int> m(n);
//        for (int i = 0; i < n; i++)
//        {
//            int tmp = dfs(nums, i, m);
//            if (tmp > ret)
//            {
//                ret = tmp;
//            }
//        }
//        return ret;
//    }
//};