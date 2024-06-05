//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int pmin = INT_MAX;
//        int ret = 0;
//        for (int i = 0; i < prices.size(); i++)
//        {
//            ret = max(ret, prices[i] - pmin);
//            if (prices[i] < pmin)
//            {
//                pmin = prices[i];
//            }
//        }
//        return ret;
//    }
//};