//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int left = 0;
//        int right = 0;
//        int maxpos = 0;
//        int n = nums.size();
//
//        while (left <= right)
//        {
//            if (maxpos >= n - 1)
//            {
//                return true;
//            }
//            for (int i = left; i <= right; i++)
//            {
//                maxpos = max(maxpos, nums[i] + i);
//
//            }
//            left = right + 1;
//            right = maxpos;
//        }
//        return false;
//
//    }
//};