//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        int dp[n][2];
//        dp[0][0] = 0, dp[0][1] = -prices[0];
//        for (int i = 1; i < n; ++i) {
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
//        }
//        return dp[n - 1][0];
//    }
//};


//ÓÅ»¯°æ
//class Solution {
//public:
//    vector<int> findAnagrams(string s, string p)
//    {
//        int m = p.size();
//        vector<int> v;
//        int left = 0;
//        int right = 0;
//        int count = 0;
//        int hash1[26] = { 0 };
//        for (auto& i : p)
//        {
//            hash1[i - 'a']++;
//        }
//
//        int hash2[26] = { 0 };
//        while (right < s.size())
//        {
//            if (hash2[s[right] - 'a'] < hash1[s[right] - 'a'])
//            {
//                count++;
//            }
//            hash2[s[right] - 'a']++;
//
//            if ((right - left + 1) > m)
//            {
//                if (hash2[s[left] - 'a'] <= hash1[s[left] - 'a'])
//                {
//                    count--;
//                }
//                hash2[s[left] - 'a']--;
//                left++;
//            }
//            if (count == m)
//            {
//                v.push_back(left);
//            }
//
//            right++;
//        }
//
//        return v;
//    }
//
//};