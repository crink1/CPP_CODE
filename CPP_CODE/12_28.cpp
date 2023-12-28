//class Solution {
//public:
//    int maxProduct(vector<int>& nums) {
//        int f = nums[0];
//        int g = nums[0];
//        int ret = nums[0];
//        for (int i = 1; i < nums.size(); i++)
//        {
//            int mf = f;
//            int mg = g;
//            f = max(nums[i], max(f * nums[i], g * nums[i]));
//            g = min(nums[i], min(mg * nums[i], mf * nums[i]));
//            ret = max(f, ret);
//        }
//        return ret;
//
//    }
//};

//class Solution {
//public:
//    int getMaxLen(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n + 1);
//        auto g = f;
//        int ret = INT_MIN;
//        for (int i = 1; i <= n; i++)
//        {
//            if (nums[i - 1] > 0)
//            {
//                f[i] = f[i - 1] + 1;
//                g[i] = g[i - 1] == 0 ? 0 : g[i - 1] + 1;
//            }
//            else if (nums[i - 1] < 0)
//            {
//                f[i] = g[i - 1] == 0 ? 0 : g[i - 1] + 1;
//                g[i] = f[i - 1] + 1;
//            }
//            ret = max(ret, f[i]);
//        }
//        return ret;
//
//    }
//};