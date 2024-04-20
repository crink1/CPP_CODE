//class Solution {
//public:
//    vector<vector<int>> vv;
//    vector<int> path;
//    void dfs(vector<int>& v, int t, int n, int sum)
//    {
//        if (sum > t)
//        {
//            return;
//        }
//        if (sum == t)
//            vv.push_back(path);
//
//        for (int i = n; i < v.size(); i++)
//        {
//            path.push_back(v[i]);
//
//            dfs(v, t, i, sum + v[i]);
//            path.pop_back();
//        }
//
//
//    }
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        dfs(candidates, target, 0, 0);
//        return vv;
//    }
//};