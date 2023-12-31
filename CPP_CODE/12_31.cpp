//class Solution {
//public:
//    int findSubstringInWraproundString(string s) {
//        int n = s.size();
//        vector<int> dp(n, 1);
//        int arr[26] = { 0 };
//
//        for (int i = 1; i < n; i++)
//        {
//            if (s[i] - 1 == s[i - 1] || s[i - 1] == 'z' && s[i] == 'a')
//            {
//                dp[i] += dp[i - 1];
//            }
//        }
//
//        for (int i = 0; i < n; i++)
//        {
//            arr[s[i] - 'a'] = max(dp[i], arr[s[i] - 'a']);
//        }
//        int ret = 0;
//        for (auto& i : arr)
//        {
//            ret += i;
//        }
//        return ret;
//    }
//};