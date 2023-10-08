//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        vector<int> v;
//        if (nums.empty())
//        {
//            return { -1, -1 };
//        }
//        int left = 0;
//        int right = nums.size() - 1;
//        int mid = 0;
//        while (left < right)
//        {
//            mid = left + (right - left) / 2;
//            if (nums[mid] >= target)
//            {
//                right = mid;
//            }
//            else
//            {
//                left = mid + 1;
//            }
//        }
//        if (nums[left] != target)
//        {
//            return { -1, -1 };
//        }
//        else
//        {
//            v.push_back(left);
//        }
//        left = 0;
//        right = nums.size() - 1;
//        mid = 0;
//        while (left < right)
//        {
//            mid = left + (right - left + 1) / 2;
//            if (nums[mid] <= target)
//            {
//                left = mid;
//            }
//            else
//            {
//                right = mid - 1;
//            }
//        }
//        v.push_back(left);
//        return v;
//    }
//};