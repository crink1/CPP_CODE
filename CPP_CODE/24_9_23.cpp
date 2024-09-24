//class Solution {
//public:
//    vector<vector<int>> vv;
//    vector<int> path;
//    bool chack[9] = { false };
//
//
//    void dfs(vector<int>& v)
//    {
//        if (path.size() == v.size())
//        {
//            vv.push_back(path);
//            return;
//        }
//        for (int i = 0; i < v.size(); i++)
//        {
//            if (chack[i] == true || (i != 0 && v[i] == v[i - 1] && chack[i - 1] == false))
//            {
//                continue;
//            }
//
//            path.push_back(v[i]);
//            chack[i] = true;
//            dfs(v);
//            path.pop_back();
//            chack[i] = false;
//
//        }
//    }
//    vector<vector<int>> permuteUnique(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        dfs(nums);
//        return vv;
//    }
//};
