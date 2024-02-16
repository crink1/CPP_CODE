//class Solution
//{
//public:
//    int lengthOfLIS(vector<int>& nums)
//    {
//        int n = nums.size();
//        vector<int> v;
//        v.push_back(nums[0]);
//        for (int i = 1; i < nums.size(); i++)
//        {
//            if (nums[i] > v.back())
//            {
//                v.push_back(nums[i]);
//            }
//            else
//            {
//                int left = 0;
//                int right = v.size();
//                int mid;
//                while (left < right)
//                {
//                    mid = left + (right - left) / 2;
//                    if (nums[i] > v[mid])
//                    {
//                        left = mid + 1;
//                    }
//                    else
//                    {
//                        right = mid;
//                    }
//                }
//                v[left] = nums[i];
//            }
//        }
//        return v.size();
//    }
//};