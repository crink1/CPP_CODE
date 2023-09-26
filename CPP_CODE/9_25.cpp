//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int hash[128] = { 0 };
//        int left = 0;
//        int right = 0;
//        int len = 0;
//        while (right < s.size())
//        {
//            hash[s[right]]++;
//            if (hash[s[right]] == 2)
//            {
//                while (hash[s[left++]]-- != 2)
//                {
//                    ;
//                }
//            }
//            if (right - left + 1 > len)
//            {
//                len = right - left + 1;
//            }
//            right++;
//        }
//        return len;
//    }
//};