//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        int n = nums.size();
//        if (n < 2)
//            return n;
//        int ret = 0, left = 0;
//        for (int i = 0; i < n - 1; i++) {
//            int right = nums[i + 1] - nums[i]; // 计算接下来的趋势
//            if (right == 0)
//                continue; // 如果⽔平，直接跳过
//            if (right * left <= 0)
//                ret++; // 累加波峰或者波⾕
//            left = right;
//        }
//        return ret + 1;
//    }