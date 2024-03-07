//class Solution {
//public:
//
//
//    int up(string str)
//    {
//        char prev = str[0];
//        for (int i = 0; i < str.size(); i++)
//        {
//            if (prev > str[i])
//            {
//                return i;
//
//            }
//            prev = str[i];
//        }
//        return -1;
//    }
//
//    int monotoneIncreasingDigits(int n) {
//        string str = to_string(n);
//        int x = up(str);
//        if (x >= 0)
//        {
//            int i = 0;
//            for (i = x; i > 0; i--)
//            {
//                if (str[i] > str[i - 1])
//                {
//                    break;
//                }
//            }
//            str[i++]--;
//            for (; i < str.size(); i++)
//            {
//                str[i] = '9';
//            }
//        }
//
//
//        return stoi(str);
//    }
//};