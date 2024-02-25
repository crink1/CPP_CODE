//class Solution {
//public:
//    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
//        if (n * m != original.size())
//        {
//            return {};
//        }
//
//
//        vector<vector<int>> vv(m, vector<int>(n));
//        int cur = 0;
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                vv[i][j] = original[cur++];
//            }
//        }
//        return vv;
//    }
//};
//class Solution {
//public:
//    vector<string> buildArray(vector<int>& target, int n) {
//        int prev = 0;
//        vector<string> ret;
//        for (auto i : target)
//        {
//            int x = i - prev - 1;
//            for (int j = 0; j < x; j++)
//            {
//                ret.push_back("Push");
//                ret.push_back("Pop");
//            }
//            ret.push_back("Push");
//            prev = i;
//        }
//        return ret;
//    }
//};