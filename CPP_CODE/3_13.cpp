//class Solution {
//public:
//    string maximumOddBinaryNumber(string s) {
//        int cnt = count(s.begin(), s.end(), '1');
//
//        string ret;
//        int i = s.size() - cnt;
//        while (cnt-- > 1)
//        {
//            ret += "1";
//        }
//
//
//        while (i--)
//        {
//            ret += "0";
//        }
//        return ret += "1";
//
//
//
//
//    }
//};