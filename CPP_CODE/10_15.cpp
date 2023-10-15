//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        vector<int> ret;
//        long long m = 1;
//        int flag = 1;
//        int count = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] == 0)
//            {
//                flag = 0;
//                count++;
//            }
//            else
//            {
//                m = m * nums[i];
//            }
//
//        }
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] == 0)
//            {
//                if (count > 1)
//                {
//                    ret.push_back(0);
//                }
//                else
//                {
//                    ret.push_back(m);
//                }
//
//            }
//            else
//            {
//                ret.push_back(m / nums[i] * flag);
//            }
//
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        hash[0] = 1;
//        int sum = 0;
//        int ret = 0;
//        for (auto& i : nums)
//        {
//            sum += i;
//            if (hash.count(sum - k))
//            {
//                ret += hash[sum - k];
//
//            }
//            hash[sum]++;
//        }
//        return ret;
//    }
//};