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

//class Solution {
//public:
//    int maxPower(string s) {
//        int ret = 0;
//        for (int i = 0; i < s.size();)
//        {
//            int j = i;
//            while (j < s.size() && s[i] == s[j])
//            {
//                j++;
//            }
//            ret = max(ret, j - i);
//            i = j;
//        }
//        return ret;
//    }
//};

//class Solution {
//public:
//    string compressString(string S) {
//        string ret;
//        for (int i = 0; i < S.size();)
//        {
//            int j = i;
//            while (j < S.size() && S[j] == S[i])
//            {
//                j++;
//            }
//            ret += S[i];
//            ret += to_string(j - i);
//            i = j;
//        }
//        if (S.size() <= ret.size())
//        {
//            return S;
//        }
//        return ret;
//    }
//};