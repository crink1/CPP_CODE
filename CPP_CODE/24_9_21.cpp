//class Solution {
//public:
//    vector<int> path;
//    vector<vector<int>> vv;
//
//    void dfs(vector<int>& v, int i, vector<bool>& vis)
//    {
//        vv.push_back(path);
//
//        for (int j = i; j < v.size(); j++)
//        {
//            if (j > 0 && v[j] == v[j - 1] && vis[j - 1] == false)
//            {
//                continue;
//            }
//            path.push_back(v[j]);
//            vis[j] = true;
//            dfs(v, j + 1, vis);
//            vis[j] = false;
//            path.pop_back();
//
//        }
//
//    }
//    vector<vector<int>> subsetsWithDup(vector<int>& nums)
//    {
//        vector<bool> vis(nums.size(), false);
//        sort(nums.begin(), nums.end());
//        dfs(nums, 0, vis);
//        return vv;
//    }
//};