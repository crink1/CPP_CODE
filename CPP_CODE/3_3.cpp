//class Solution {
//public:
//    string optimalDivision(vector<int>& nums) {
//        int n = nums.size();
//        string ret;
//        if (n == 1)
//        {
//            ret += to_string(nums[0]);
//            return ret;
//        }
//        if (n == 2)
//        {
//            ret += to_string(nums[0]);
//            ret += "/";
//            ret += to_string(nums[1]);
//
//            return ret;
//        }
//        else
//        {
//            int flag = 1;
//            ret += to_string(nums[0]);
//            for (int i = 1; i < n; i++)
//            {
//                ret += "/";
//                if (flag == 1)
//                {
//                    ret += "(";
//                    flag = 0;
//                }
//                ret += to_string(nums[i]);
//            }
//            ret += ")";
//        }
//        return ret;
//    }
//};