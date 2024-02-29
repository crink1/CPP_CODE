//class Solution {
//public:
//    vector<int> diStringMatch(string s) {
//        int n = s.size();
//        int left = 0;
//        int right = n;
//        vector<int> ret(n + 1);
//        int i = 0;
//        for (auto& e : s)
//        {
//            if (e == 'I')
//            {
//                ret[i++] = left++;
//            }
//            else if (e == 'D')
//            {
//                ret[i++] = right--;
//            }
//        }
//        ret[n] = left;
//
//
//
//        return ret;
//    }
//};