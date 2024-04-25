//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        int i = 0;
//        while (i <= strs[0].size())
//        {
//            char c = strs[0][i];
//            for (auto& s : strs)
//            {
//                if (i > s.size() || s[i] != c)
//                {
//                    return s.substr(0, i);
//                }
//            }
//            i++;
//        }
//        return strs[0];
//    }
//};