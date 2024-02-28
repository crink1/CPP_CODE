//class Solution {
//public:
//    int longestPalindrome(string s) {
//        int hash[127] = { 0 };
//        for (auto& i : s)
//        {
//            hash[i]++;
//        }
//        int ret = 0;
//        for (auto& i : hash)
//        {
//            ret += i / 2 * 2;
//        }
//        if (ret < s.size())
//        {
//            ret++;
//        }
//        return ret;
//    }
//};