//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int i = 0;
//        int left = -1;
//        int right = nums.size();
//        while (i < right)
//        {
//            if (0 == nums[i])
//            {
//                left++;
//                swap(nums[left], nums[i++]);
//            }
//            else if (2 == nums[i])
//            {
//                right--;
//                swap(nums[right], nums[i]);
//            }
//            else
//            {
//                i++;
//            }
//        }
//    }
//};