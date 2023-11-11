//class Solution {
//public:
//    int minSwapsCouples(vector<int>& row) {
//        int ans = 0;
//        for (auto i = row.begin(); i < row.end(); i += 2) {
//            if ((*i ^ 1) != *(i + 1)) ans++;
//            iter_swap(i + 1, find(i + 1, row.end(), *i ^ 1));
//        }
//        return ans;
//    }
//};