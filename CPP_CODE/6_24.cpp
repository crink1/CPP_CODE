//class Solution {
//public:
//    void reverse(string& s, int start, int end)
//    {
//        for (int i = start, j = end; i < j; i++, j--) {
//            swap(s[i], s[j]);
//        }
//    }
//
//
//    void rems(string& s)
//    {
//        int left = 0;
//        int right = 0;
//        while (s.size() > 0 && right < s.size() && s[right] == ' ')
//        {
//            right++;
//        }
//
//        while (right < s.size())
//        {
//            if (right - 1 > 0 && (s[right - 1] == s[right]) && s[right] == ' ')
//            {
//                right++;
//                continue;
//            }
//            else
//            {
//                s[left++] = s[right++];
//            }
//
//        }
//
//        if (right - 1 > 0 && s[right - 1] == ' ')
//        {
//            s.resize(left - 1);
//        }
//        else
//        {
//            s.resize(left);
//        }
//
//    }
//
//    string reverseWords(string s) {
//
//        rems(s);
//        reverse(s, 0, s.size() - 1);
//        int start = 0;
//        for (int i = 0; i <= s.size(); ++i)
//        {
//            if (i == s.size() || s[i] == ' ')
//            {
//                reverse(s, start, i - 1);
//                start = i + 1;
//            }
//        }
//        return s;
//    }
//};