//class Solution {
//public:
//    int findLengthOfLCIS(vector<int>& nums) {
//        int n = nums.size();
//        int left = 0;
//        int right = 1;
//        int ret = 1;
//        while (right < n)
//        {
//            if (nums[right] > nums[right - 1])
//            {
//                right++;
//            }
//            else
//            {
//                ret = max(right - left, ret);
//                left = right;
//                right++;
//            }
//            ret = max(right - left, ret);
//
//        }
//
//        return ret;
//    }
//};