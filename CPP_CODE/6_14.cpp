//class Solution {
//public:
//    long long maxScore(vector<int>& nums, int x) {
//        int n = nums.size();
//        long long score = nums[0];
//        long long even, odd;
//        if (nums[0] & 1) {
//            odd = nums[0];
//            even = nums[0] - x;
//        }
//        else {
//            even = nums[0];
//            odd = nums[0] - x;
//        }
//        for (int i = 1; i < n; ++i) {
//            if (nums[i] & 1) {
//                odd = max(odd + nums[i], even - x + nums[i]);
//                score = max(score, odd);
//            }
//            else {
//                even = max(even + nums[i], odd - x + nums[i]);
//                score = max(score, even);
//            }
//        }
//        return score;
//    }
//};