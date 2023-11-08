//class Solution {
//public:
//    vector<int> tmp;
//    void mergesort(vector<int>& nums, vector<int>& index, vector<int>& indexcount, vector<int>& count, int left, int right)
//    {
//        if (left >= right)
//        {
//            return;
//        }
//        int mid = (right - left) / 2 + left;
//        mergesort(nums, index, indexcount, count, left, mid);
//        mergesort(nums, index, indexcount, count, mid + 1, right);
//        int cur1 = left;
//        int cur2 = mid + 1;
//        int i = 0;
//        while (cur1 <= mid && cur2 <= right)
//        {
//            if (nums[cur1] <= nums[cur2])
//            {
//                indexcount[i] = index[cur2];
//                tmp[i++] = nums[cur2++];
//
//            }
//            else
//            {
//
//                count[index[cur1]] += right - cur2 + 1;
//                indexcount[i] = index[cur1];
//                tmp[i++] = nums[cur1++];
//            }
//        }
//        while (cur1 <= mid)
//        {
//            indexcount[i] = index[cur1];
//            tmp[i++] = nums[cur1++];
//        }
//
//        while (cur2 <= right)
//        {
//            indexcount[i] = index[cur2];
//            tmp[i++] = nums[cur2++];
//        }
//        for (int i = left; i <= right; i++)
//        {
//            index[i] = indexcount[i - left];
//            nums[i] = tmp[i - left];
//        }
//
//    }
//    vector<int> countSmaller(vector<int>& nums) {
//        vector<int> index(nums.size());
//        for (int i = 0; i < nums.size(); i++)
//        {
//            index[i] = i;
//        }
//        if (nums.size() <= 1)
//        {
//            return { 0 };
//        }
//        vector<int> count;
//        vector<int> indexcount(nums.size());
//        tmp.resize(nums.size());
//        count.resize(nums.size());
//        mergesort(nums, index, indexcount, count, 0, nums.size() - 1);
//        return count;
//    }
//};