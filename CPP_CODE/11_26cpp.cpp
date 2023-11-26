//class Solution {
//public:
//
//
//    vector<vector<int>> vv;
//    vector<int> path;
//
//    void dfs(int pos, int n, int k)
//    {
//        if (path.size() == k)
//        {
//            vv.push_back(path);
//            return;
//        }
//        for (int i = pos; i <= n; i++)
//        {
//            path.push_back(i);
//            dfs(i + 1, n, k);
//            path.pop_back();
//        }
//    }
//
//    vector<vector<int>> combine(int n, int k) {
//        dfs(1, n, k);
//        return vv;
//    }
//};
//
//class Solution {
//public:
//
//
//    int count = 0;
//    void dfs(int i, vector<int>& nums, int t, int sum)
//    {
//
//        if (nums.size() == i)
//        {
//            if (sum == t)
//            {
//                count++;
//            }
//            return;
//        }
//
//        dfs(i + 1, nums, t, sum + nums[i]);
//
//        dfs(i + 1, nums, t, sum - nums[i]);
//
//    }
//
//    int findTargetSumWays(vector<int>& nums, int target)
//    {
//        if (nums.empty())
//        {
//            return 0;
//        }
//        int sum = 0;
//        dfs(0, nums, target, sum);
//        return count;
//    }
//};