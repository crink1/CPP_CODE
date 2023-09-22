//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
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
//            if (n < 0)
//            {
//                break;
//            }
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
//                    left++;
//                    right--;
//                    while (left < right && nums[left] == nums[left - 1])
//                    {
//                        ++left;
//                    }
//                    while (left < right && nums[right] == nums[right + 1])
//                    {
//                        --right;
//                    }
//
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
//int main()
//{
//    vector<int> v = { 0,0,0,0 };
//    Solution s;
//    vector<vector<int>> vv = s.threeSum(v);
//    for (auto& vv : vv)
//    {
//        for (auto& v : vv)
//        {
//            cout << v << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}