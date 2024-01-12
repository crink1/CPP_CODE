//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& nums) {
//        int n = nums.size();
//        vector<vector<int>> dp(n, vector<int>(n));
//        unordered_map<long long, vector<int>> hash;
//        for (int i = 0; i < n; i++)
//        {
//            hash[nums[i]].push_back(i);
//        }
//        int ret = 0;
//        for (int j = 2; j < n; j++)
//        {
//            for (int i = 1; i < j; i++)
//            {
//                long long tmp = (long long)2 * nums[i] - nums[j];
//                if (hash.count(tmp))
//                {
//                    for (auto& k : hash[tmp])
//                    {
//                        if (k < i)
//                        {
//                            dp[i][j] += dp[k][i] + 1;
//                        }
//
//                    }
//                    ret += dp[i][j];
//                }
//            }
//        }
//        return ret;
//    }
//};