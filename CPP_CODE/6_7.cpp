//class Solution {
//public:
//    vector<int> sortedSquares(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> ret(n);
//
//        for (int i = 0, j = n - 1, pos = n - 1; i <= j;)
//        {
//            if (nums[i] * nums[i] < nums[j] * nums[j])
//            {
//                ret[pos] = nums[j] * nums[j];
//                j--;
//            }
//            else
//            {
//                ret[pos] = nums[i] * nums[i];
//                i++;
//            }
//            pos--;
//        }
//        return ret;
//    }
//};