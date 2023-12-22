//class Solution {
//public:
//
//
//    int rob1(int left, int right, vector<int>& nums)
//    {
//        if (left > right)
//        {
//            return 0;
//        }
//        int n = nums.size();
//        vector<int> f(n);
//        auto g = f;
//        f[left] = nums[left];
//
//        for (int i = left + 1; i <= right; i++)
//        {
//            f[i] = g[i - 1] + nums[i];
//            g[i] = max(g[i - 1], f[i - 1]);
//        }
//        return max(f[right], g[right]);
//    }
//
//    int rob(vector<int>& nums) {
//
//        return max(nums[0] + rob1(2, nums.size() - 2, nums), rob1(1, nums.size() - 1, nums));
//    }
//};