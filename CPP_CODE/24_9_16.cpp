//class Solution {
//public:
//    vector<vector<int>> ret;
//    vector<int> v;
//
//    void dfs(int k, int n, int cnt, int i, int sum)
//    {
//        if (cnt == k)
//        {
//            if (n == sum)
//            {
//                ret.push_back(v);
//            }
//            return;
//        }
//        for (int j = i; j <= 9; j++)
//        {
//            v.push_back(j);
//            dfs(k, n, cnt + 1, j + 1, sum + j);
//            v.pop_back();
//        }
//    }
//
//    vector<vector<int>> combinationSum3(int k, int n)
//    {
//        dfs(k, n, 0, 1, 0);
//        return ret;
//    }
//};