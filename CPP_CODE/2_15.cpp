//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        if (nums.size() < 2)
//        {
//            return nums.size();
//        }
//        int ret = 0;
//        int left = 0;
//        for (int i = 0; i < nums.size() - 1; i++)
//        {
//            int right = nums[i + 1] - nums[i];
//
//            if (right == 0)
//            {
//                continue;
//            }
//
//            if (left * right <= 0)
//            {
//                ret++;
//            }
//
//            left = right;
//        }
//        return ret + 1;
//    }
//};