//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int left = 0;
//        int right = 0;
//        int len = 1e5;
//        int sum = 0;
//        int n = nums.size();
//
//        while (right < n)
//        {
//            sum += nums[right];
//            while (sum >= target)
//            {
//                if (right - left + 1 < len)
//                {
//                    len = right - left + 1;
//                }
//
//                sum -= nums[left];
//                left++;
//            }
//            right++;
//        }
//        if (left == 0 && sum < target)
//        {
//            return 0;
//        }
//        return len;
//    }
//};

//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        priority_queue<int> pq(nums.begin(), nums.end());
//        while (--k)
//        {
//            pq.pop();
//        }
//        return pq.top();
//
//    }
//};