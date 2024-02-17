//class Solution {
//public:
//    string decodeString(string s) {
//        stack<int> nums;
//        stack<string> strs;
//        string str;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] >= '0' && s[i] <= '9')
//            {
//                int n = s[i] - '0';
//                while (isdigit(s[++i]))
//                {
//                    n = 10 * n + s[i] - '0';
//                }
//                nums.push(n);
//                i--;
//            }
//            else if (s[i] == '[')
//            {
//                strs.push(str);
//                str = "";
//            }
//            else if (s[i] == ']')
//            {
//                string t;
//                for (int i = 0; i < nums.top(); i++)
//                {
//                    t += str;
//                }
//                str = t;
//                nums.pop();
//                str = strs.top() + t;
//                strs.pop();
//            }
//            else
//            {
//                str += s[i];
//            }
//        }
//        return str;
//
//    }
//};