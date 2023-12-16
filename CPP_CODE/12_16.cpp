//class Solution {
//public:
//    int numDecodings(string s) {
//        vector<int> dp(s.size());
//        if (s[0] == '0')
//        {
//            dp[0] = 0;
//        }
//        else
//        {
//            dp[0] = 1;
//        }
//        if (s.size() == 1)
//        {
//            return dp[0];
//        }
//
//        if (s[1] <= '9' && s[1] >= '1')
//        {
//            dp[1] = dp[0];
//        }
//        int t = (s[0] - '0') * 10 + s[1] - '0';
//        if (t >= 10 && t <= 26)
//            dp[1] += 1;
//
//        for (int i = 2; i < s.size(); i++)
//        {
//
//            if (s[i] <= '9' && s[i] >= '1')
//            {
//                dp[i] += dp[i - 1];
//            }
//            int t = (s[i - 1] - '0') * 10 + s[i] - '0';
//            if (t >= 10 && t <= 26)
//                dp[i] += dp[i - 2];
//            cout << dp[i] << endl;
//        }
//        return dp[s.size() - 1];
//
//    }
//};