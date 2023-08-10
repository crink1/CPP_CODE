//class Solution {
//public:
//    string addstr(string num1, string num2)
//    {
//        int end1 = num1.size() - 1;
//        int end2 = num2.size() - 1;
//        string str;
//        int next = 0;
//        while (end1 >= 0 || end2 >= 0)
//        {
//            int x1 = end1 >= 0 ? num1[end1] - '0' : 0;
//            int x2 = end2 >= 0 ? num2[end2] - '0' : 0;
//            int ret = x1 + x2 + next;
//            next = ret / 10;
//            ret = ret % 10;
//            str += '0' + ret;
//            end1--;
//            end2--;
//        }
//        if (next == 1)
//        {
//            str += '1';
//        }
//        reverse(str.begin(), str.end());
//
//        return str;
//    }
//    string multiply(string num1, string num2) {
//        if (num1 == "0" || num2 == "0")
//        {
//            return "0";
//        }
//        int end1 = num1.size() - 1;
//        int end2 = num2.size() - 1;
//        string s;
//
//        int i = 0;
//        for (int i = end2; i >= 0; i--)
//        {
//            string str;
//            int next = 0;
//            for (int j = end2; j > i; j--) {
//                str += '0';
//            }
//            int x2 = num2[i] - '0';
//            for (int j = end1; j >= 0; j--)
//            {
//                int x1 = num1[j] - '0';
//                int ret = x1 * x2 + next;
//                next = ret / 10;
//                ret = ret % 10;
//                str += ret + '0';
//            }
//            while (next != 0)
//            {
//                str += (next % 10) + '0';
//                next /= 10;
//            }
//            reverse(str.begin(), str.end());
//
//            s = addstr(s, str);
//
//        }
//        return s;
//
//
//    }
//};