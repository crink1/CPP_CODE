//class Solution {
//public:
//    vector<vector<int>> ret;
//    vector<int> v;
//
//    void dfs(vector<int>& nums, int i)
//    {
//        if (v.size() > 1)
//        {
//            ret.push_back(v);
//        }
//
//        unordered_set<int> vis;
//        for (int j = i; j < nums.size(); j++)
//        {
//
//            if ((!v.empty() && nums[j] < v.back())
//                || vis.find(nums[j]) != vis.end())
//            {
//                continue;
//            }
//            vis.insert(nums[j]);
//            v.push_back(nums[j]);
//            dfs(nums, j + 1);
//            v.pop_back();
//        }
//    }
//
//    vector<vector<int>> findSubsequences(vector<int>& nums)
//    {
//        dfs(nums, 0);
//        return ret;
//    }
//};