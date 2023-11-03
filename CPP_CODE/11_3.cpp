//class Solution {
//public:
//
//    int getkey(vector<int>& nums, int begin, int end)
//    {
//        int r = rand();
//        return nums[r % (end - begin + 1) + begin];
//    }
//
//    int qsortfind(vector<int>& nums, int k, int begin, int end)
//    {
//        if (begin == end)
//        {
//            return nums[begin];
//        }
//        int key = getkey(nums, begin, end);
//        int i = begin;
//        int left = begin - 1;
//        int right = end + 1;
//        while (i < right)
//        {
//            if (nums[i] > key)
//            {
//                swap(nums[i], nums[--right]);
//            }
//            else if (nums[i] < key)
//            {
//                swap(nums[i++], nums[++left]);
//            }
//            else
//            {
//                i++;
//            }
//        }
//        int c = end - right + 1, b = right - left - 1;
//        if (c >= k)
//        {
//            return qsortfind(nums, k, right, end);
//        }
//        else if (b + c >= k)
//        {
//            return key;
//        }
//        else
//        {
//            return qsortfind(nums, k - b - c, begin, left);
//        }
//
//    }
//
//    int findKthLargest(vector<int>& nums, int k) {
//        srand(time(NULL));
//        int ret = qsortfind(nums, k, 0, nums.size() - 1);
//        return ret;
//    }
//};