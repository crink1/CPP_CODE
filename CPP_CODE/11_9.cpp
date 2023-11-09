//class Solution {
//public:
//    int ret = 0;
//    vector<int> tmp;
//    void mergesort(vector<int>& nums, int left, int right)
//    {
//        if (left >= right)
//        {
//            return;
//        }
//        int mid = (right - left) / 2 + left;
//        mergesort(nums, left, mid);
//        mergesort(nums, mid + 1, right);
//        int cur1 = left;
//        int cur2 = mid + 1;
//        int i = 0;
//        while (cur2 <= right)
//        {
//            while (cur1 <= mid && nums[cur2] >= nums[cur1] / 2.0)
//            {
//                cur1++;
//            }
//            if (cur1 > mid)
//            {
//                break;
//            }
//            ret += mid - cur1 + 1;
//            cur2++;
//        }
//
//        cur1 = left;
//        cur2 = mid + 1;
//        i = 0;
//        while (cur1 <= mid && cur2 <= right)
//        {
//            if (nums[cur1] <= nums[cur2])
//            {
//                tmp[i++] = nums[cur1++];
//            }
//            else
//            {
//                tmp[i++] = nums[cur2++];
//            }
//        }
//        while (cur1 <= mid)
//        {
//            tmp[i++] = nums[cur1++];
//
//        }
//        while (cur2 <= right)
//        {
//            tmp[i++] = nums[cur2++];
//        }
//        for (int i = left; i <= right; i++)
//        {
//            nums[i] = tmp[i - left];
//        }
//    }
//
//
//    int reversePairs(vector<int>& nums) {
//        tmp.resize(nums.size());
//        mergesort(nums, 0, nums.size() - 1);
//        return ret;
//    }
//};