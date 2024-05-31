//class Solution {
//public:
//    string addBinary(string a, string b) {
//
//        int t = 0;
//        int i = a.size() - 1;
//        int j = b.size() - 1;
//        string ret;
//        while (i >= 0 || j >= 0 || t)
//        {
//            if (i >= 0)
//            {
//                t += a[i--] - '0';
//            }
//
//            if (j >= 0)
//            {
//                t += b[j--] - '0';
//            }
//            ret += to_string(t % 2);
//            t /= 2;
//        }
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};