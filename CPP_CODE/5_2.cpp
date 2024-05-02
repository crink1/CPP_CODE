//class Solution {
//public:
//    int calculate(string s) {
//        vector<int> st;
//        char oper = '+';
//
//        for (int i = 0; i < s.size(); )
//        {
//            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
//            {
//                oper = s[i++];
//            }
//            else if (s[i] == ' ')
//            {
//                i++;
//            }
//            else
//            {
//                int tmp = 0;
//                while (i < s.size() && s[i] >= '0' && s[i] <= '9')
//                {
//                    tmp = tmp * 10 + (s[i++] - '0');
//                }
//                if (oper == '+')
//                {
//                    st.push_back(tmp);
//                }
//                else if (oper == '-')
//                {
//                    st.push_back(-tmp);
//                }
//                else if (oper == '*')
//                {
//                    st.back() *= tmp;
//
//                }
//                else if (oper == '/')
//                {
//                    st.back() /= tmp;
//
//                }
//            }
//        }
//
//        int ret = 0;
//        for (auto& i : st)
//        {
//            ret += i;
//        }
//        return ret;
//    }
//};