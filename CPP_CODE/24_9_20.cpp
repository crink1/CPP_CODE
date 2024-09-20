//class Solution {
//public:
//    vector<string> ret;
//    void dfs(const string& s, int i, int cnt, string str)
//    {
//        if (cnt >= 3)
//        {
//            //cout <<  str + s.substr(i) << endl;
//            if (isip(s, i, s.size() - 1))
//            {
//                str += s.substr(i);
//                ret.push_back(str);
//            }
//
//            return;
//        }
//
//        for (int j = i; j < s.size(); j++)
//        {
//            if (isip(s, i, j))
//            {
//                dfs(s, j + 1, cnt + 1, str + s.substr(i, j - i + 1) + '.');
//            }
//            else
//            {
//                break;
//            }
//        }
//    }
//
//    bool isip(const string& s, int l, int r)
//    {
//        if (l > r)
//        {
//            return false;
//        }
//
//        if (s[l] == '0' && l != r)
//        {
//            return false;
//        }
//        int num = 0;
//        for (int i = l; i <= r; i++)
//        {
//            if (s[i] > '9' || s[i] < '0')
//            {
//                return false;
//            }
//
//            num = num * 10 + (s[i] - '0');
//
//            if (num > 255)
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//
//    vector<string> restoreIpAddresses(string s) {
//        dfs(s, 0, 0, "");
//        return ret;
//    }
//};