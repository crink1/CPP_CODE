//class Solution {
//public:
//
//    vector<vector<string>> ret;
//    vector<string> vs;
//
//    void dfs(const string& s, int i)
//    {
//        if (i >= s.size())
//        {
//            ret.push_back(vs);
//            return;
//        }
//        for (int j = i; j < s.size(); j++)
//        {
//            if (ispr(s, i, j))
//            {
//                vs.push_back(s.substr(i, j - i + 1));
//            }
//            else
//            {
//                continue;
//            }
//            dfs(s, j + 1);
//            vs.pop_back();
//
//        }
//    }
//
//    bool ispr(const string& s, int l, int r)
//    {
//        while (l < r)
//        {
//            if (s[l] != s[r])
//            {
//                return false;
//            }
//            l++;
//            r--;
//        }
//        return true;
//    }
//
//    vector<vector<string>> partition(string s)
//    {
//        dfs(s, 0);
//        return ret;
//    }
//};