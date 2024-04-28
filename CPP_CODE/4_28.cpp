//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        reverse(num1.begin(), num1.end());
//        reverse(num2.begin(), num2.end());
//        int m = num1.size();
//        int n = num2.size();
//        vector<int> tmp(m + n - 1);
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                tmp[i + j] += (num1[i] - '0') * (num2[j] - '0');
//            }
//        }
//
//        string ret;
//        int cur = 0, t = 0;
//        while (cur < m + n - 1 || t != 0)
//        {
//            if (cur < m + n - 1)
//            {
//                t += tmp[cur++];
//            }
//            ret += t % 10 + '0';
//            t /= 10;
//        }
//
//        while (ret.size() > 1 && ret.back() == '0')
//        {
//            ret.pop_back();
//        }
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};