//class Solution {
//public:
//    long long maxArrayValue(vector<int>& nums) {
//        long long ret = nums[nums.size() - 1];
//        for (int i = nums.size() - 2; i >= 0; i--)
//        {
//            if (nums[i] <= ret)
//            {
//                ret += nums[i];
//            }
//            else
//            {
//                ret = nums[i];
//            }
//        }
//        return ret;
//    }
//};