//class Solution {
//public:
//    int minOperations(vector<int>& nums) {
//        int operation = 0;
//        for (int i = nums.size() - 2; i >= 0; i--) {
//            if (nums[i] != nums[i + 1]) {
//                operation++;
//            }
//        }
//        return nums[0] == 1 ? operation : operation + 1;
//    }
//};