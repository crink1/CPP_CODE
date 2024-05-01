//class Solution {
//public:
//    string cstr(string s)
//    {
//        string ret;
//        for (auto& i : s)
//        {
//            if (i != '#')
//            {
//                ret += i;
//            }
//            else
//            {
//                if (ret.size())
//                {
//                    ret.pop_back();
//                }
//
//            }
//        }
//        return ret;
//    }
//
//    bool backspaceCompare(string s, string t) {
//        return cstr(s) == cstr(t);
//    }
//};