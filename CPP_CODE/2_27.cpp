//class Solution {
//public:
//    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2)
//    {
//        int n = nums1.size();
//        vector<int> index2(n);
//        vector<int> ret(n);
//        for (int i = 0; i < n; i++)
//        {
//            index2[i] = i;
//        }
//
//        sort(index2.begin(), index2.end(), [&](int i, int j) {return nums2[i] < nums2[j]; });
//        sort(nums1.begin(), nums1.end());
//        int left = 0;
//        int right = n - 1;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums1[i] > nums2[index2[left]])
//            {
//                ret[index2[left]] = nums1[i];
//                left++;
//            }
//            else
//            {
//                ret[index2[right--]] = nums1[i];
//            }
//
//        }
//        return ret;
//
//
//    }
//};