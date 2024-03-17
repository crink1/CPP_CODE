//class Solution {
//public:
//    string reorganizeString(string s) {
//        int n = s.size();
//        unordered_map<char, int> hash;
//        int maxcnt = 0;
//        char maxval = 0;
//        for (auto& i : s)
//        {
//            if (maxcnt < ++hash[i])
//            {
//                maxcnt = hash[i];
//                maxval = i;
//            }
//        }
//        if (maxcnt > (n + 1) / 2)
//        {
//            return "";
//        }
//
//        string ret;
//        ret.resize(n);
//        int index = 0;
//        for (int i = 0; i < maxcnt; i++)
//        {
//            ret[index] = maxval;
//            index += 2;
//        }
//        hash.erase(maxval);
//        for (auto& [c, cnt] : hash)
//        {
//
//            for (int i = 0; i < cnt; i++)
//            {
//                if (index >= n)
//                {
//                    index = 1;
//                }
//                ret[index] = c;
//                index += 2;
//            }
//
//        }
//
//        return ret;
//    }
//};