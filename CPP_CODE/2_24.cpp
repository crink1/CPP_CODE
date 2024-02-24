//class Solution {
//public:
//    int largestSumAfterKNegations(vector<int>& nums, int k) {
//        int m = 0;
//        int mine = INT_MAX;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] < 0)
//            {
//                m++;
//            }
//            mine = min(mine, abs(nums[i]));
//        }
//        int ret = 0;
//        if (m > k)
//        {
//            sort(nums.begin(), nums.end());
//            for (int i = 0; i < k; i++)
//            {
//                ret += abs(nums[i]);
//            }
//            for (int i = k; i < n; i++)
//            {
//                ret += nums[i];
//            }
//
//        }
//        else
//        {
//            for (auto& i : nums)
//            {
//                ret += abs(i);
//            }
//            if ((k - m) % 2)
//            {
//                ret -= 2 * mine;
//            }
//        }
//        return ret;
//    }
//};