//class Solution {
//public:
//    int minOperations(vector<int>& nums, int x) {
//        int sum = 0;
//        for (auto i : nums)
//        {
//            sum += i;
//        }
//        sum = sum - x;
//        if (sum < 0)
//        {
//            return -1;
//        }
//        int lsum = 0;
//        int left = 0;
//        int right = 0;
//        int len = INT_MAX;
//        while (right < nums.size())
//        {
//            lsum += nums[right];
//            while (left < nums.size() && lsum > sum)
//            {
//                lsum -= nums[left++];
//            }
//            if (lsum == sum)
//            {
//                if ((nums.size() - (right - left + 1)) < len)
//                {
//                    len = right - left + 1;
//                    len = nums.size() - len;
//                }
//
//            }
//            right++;
//        }
//        if (len == INT_MAX)
//        {
//            return -1;
//        }
//        return len;
//    }
//};