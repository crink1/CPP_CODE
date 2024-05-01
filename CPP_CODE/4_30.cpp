//class Solution {
//public:
//    string removeDuplicates(string s) {
//        string ret;
//        for (auto& i : s)
//        {
//            if (!ret.empty())
//            {
//                if (i == ret.back())
//                {
//                    ret.pop_back();
//                }
//                else
//                {
//                    ret += i;
//                }
//            }
//            else
//            {
//                ret += i;
//            }
//        }
//        return ret;
//    }
//};