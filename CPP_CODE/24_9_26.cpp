//class Solution {
//public:
//    int candy(vector<int>& ratings) {
//        vector<int> cv(ratings.size(), 1);
//        for (int i = 1; i < ratings.size(); i++)
//        {
//            if (ratings[i] > ratings[i - 1])
//            {
//                cv[i] = cv[i - 1] + 1;
//            }
//
//        }
//
//        for (int i = ratings.size() - 2; i >= 0; i--)
//        {
//            if (ratings[i] > ratings[i + 1])
//            {
//                cv[i] = max(cv[i], cv[i + 1] + 1);
//            }
//        }
//
//        int ret = 0;
//        for (auto& i : cv)
//        {
//            ret += i;
//        }
//        return ret;
//
//    }
//};