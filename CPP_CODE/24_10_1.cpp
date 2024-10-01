//class Solution {
//public:
//    vector<int> partitionLabels(string s) {
//
//        int hash[26] = { 0 };
//        for (int i = 0; i < s.size(); i++)
//        {
//            hash[s[i] - 'a'] = i;
//        }
//
//        vector<int> ret;
//        int l = 0;
//        int r = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            r = max(r, hash[s[i] - 'a']);
//            if (i == r)
//            {
//                ret.push_back(r - l + 1);
//                l = r + 1;
//            }
//        }
//        return ret;
//    }
//};