//class Solution {
//public:
//    string decodeString(string s) {
//        stack<int> si;
//        stack<string> ss;
//        ss.push("");
//        int i = 0;
//        while (i < s.size())
//        {
//            if (s[i] >= '0' && s[i] <= '9')
//            {
//                int tmp = 0;
//                while (i < s.size() && s[i] >= '0' && s[i] <= '9')
//                {
//                    tmp = tmp * 10 + (s[i++] - '0');
//                }
//                si.push(tmp);
//            }
//            else if (s[i] == '[')
//            {
//                i++;
//                string tmp;
//                while (i < s.size() && s[i] >= 'a' && s[i] <= 'z')
//                {
//                    tmp += s[i++];
//                }
//                ss.push(tmp);
//            }
//            else if (s[i] == ']')
//            {
//                string s = ss.top();
//                ss.pop();
//                int n = si.top();
//                si.pop();
//                for (int j = 0; j < n; j++)
//                {
//                    ss.top() += s;
//                }
//                i++;
//            }
//            else
//            {
//                string tmp;
//                while (i < s.size() && s[i] >= 'a' && s[i] <= 'z')
//                {
//                    tmp += s[i++];
//                }
//                ss.top() += tmp;
//            }
//        }
//        return ss.top();
//    }
//};