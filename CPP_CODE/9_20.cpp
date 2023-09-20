//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> vv;
//        sort(nums.begin(), nums.end());
//        for (int i = 0; i < nums.size() - 1; i++)
//        {
//            int left = i + 1;
//            int right = nums.size() - 1;
//            int n = -nums[i];
//
//            while (left < right)
//            {
//
//                if (nums[left] + nums[right] > n)
//                {
//
//                    right--;
//                }
//                else if (nums[left] + nums[right] < n)
//                {
//
//                    ++left;
//                }
//                else
//                {
//                    vector<int> v;
//                    v.push_back(nums[i]);
//                    v.push_back(nums[left]);
//                    v.push_back(nums[right]);
//                    vv.push_back(v);
//                    while (left < right && nums[left] == nums[left + 1])
//                    {
//                        ++left;
//                    }
//                    left++;
//                    right--;
//                }
//
//            }
//            while (i < nums.size() - 1 && nums[i] == nums[i + 1])
//            {
//                i++;
//            }
//        }
//        return vv;
//    }
//};
//class Solution {
//public:
//    int minCount(vector<int>& coins) {
//        int sum = 0;
//        for (int& i : coins) {
//            sum += (i + 1) / 2;
//        }
//        return sum;
//    }
//};

