//#include <iostream>
//using namespace std;
//
//int main() {
//    int n = 8;
//    int arr[8];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    int count = 0;
//    for (int i = 1; i < n;)
//    {
//        if (arr[i] > arr[i - 1])
//        {
//            while (i < n && arr[i] >= arr[i - 1])
//            {
//                i++;
//            }
//            count++;
//        }
//        else
//        {
//            while (i < n && arr[i] <= arr[i - 1])
//            {
//                i++;
//            }
//            count++;
//        }
//
//    }
//    cout << count;
//    return 0;
//
//}
//class Solution {
//public:
//    vector<vector<int>> fourSum(vector<int>& nums, int target) {
//        vector<vector<int>> ret;
//        sort(nums.begin(), nums.end());
//        for (int i = 0; i < nums.size();)
//        {
//            for (int j = i + 1; j < nums.size();)
//            {
//                int left = j + 1;
//                int right = nums.size() - 1;
//                long long t = (long long)target - (long long)(nums[i] + nums[j]);
//                if (t > INT_MAX || t < INT_MIN)
//                {
//                    return{};
//                }
//                while (left < right)
//                {
//                    if (nums[left] + nums[right] > t)
//                    {
//                        right--;
//                    }
//                    else if (nums[left] + nums[right] < t)
//                    {
//                        left++;
//                    }
//                    else
//                    {
//                        ret.push_back({ nums[i],nums[j],nums[left],nums[right] });
//                        left++;
//                        right--;
//                        while (left < right && nums[left] == nums[left - 1])
//                        {
//                            left++;
//                        }
//                        while (left < right && nums[right] == nums[right + 1])
//                        {
//                            right--;
//                        }
//
//                    }
//                }
//                j++;
//                while (j < nums.size() && nums[j] == nums[j - 1])
//                {
//                    j++;
//                }
//            }
//            i++;
//            while (i < nums.size() && nums[i] == nums[i - 1])
//            {
//                i++;
//            }
//
//        }
//        return ret;
//    }
//};