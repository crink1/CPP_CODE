//class Solution {
//public:
//    string minWindow(string s, string t) {
//        int hash1[128] = { 0 };
//        int kinds = 0;
//        for (auto& i : t)
//        {
//            if (hash1[i]++ == 0)
//            {
//                kinds++;
//            }
//        }
//        int left = 0;
//        int right = 0;
//        int hash2[128] = { 0 };
//        int count = 0;
//        int begin = -1;
//        int len = INT_MAX;
//        int m = t.size();
//        while (right < s.size())
//        {
//            hash2[s[right]]++;
//            if (hash2[s[right]] <= hash1[s[right]])
//            {
//                count++;
//            }
//            while (count == m)
//            {
//
//                if ((right - left + 1) < len)
//                {
//                    len = right - left + 1;
//                    begin = left;
//                }
//                if (hash2[s[left]] <= hash1[s[left]])
//                {
//                    count--;
//                }
//                hash2[s[left]]--;
//                left++;
//            }
//            right++;
//        }
//        if (begin == -1)
//        {
//            return "";
//        }
//        return s.substr(begin, len);
//    }
//};