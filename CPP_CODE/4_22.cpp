//class Solution {
//public:
//    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//        unordered_map<int, int > hash;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (hash.count(nums[i]))
//            {
//                if (i - hash[nums[i]] <= k)
//                {
//                    return true;
//                }
//            }
//            hash[nums[i]] = i;
//
//        }
//        return false;
//    }
//};
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        vector<vector<string>> ret;
//        unordered_map<string, vector<string>> hash;
//        for (auto& i : strs)
//        {
//            string tmp = i;
//            sort(tmp.begin(), tmp.end());
//            hash[tmp].push_back(i);
//
//        }
//        for (auto& [x, y] : hash)
//        {
//            ret.push_back(y);
//        }
//        return ret;
//    }
//};