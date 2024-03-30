//class Solution {
//public:
//    int findMaxForm(vector<string>& strs, int m, int n) {
//        int sz = strs.size();
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//        for (int i = 1; i <= sz; i++)
//        {
//            int a = 0;
//            int b = 0;
//            for (auto& s : strs[i - 1])
//            {
//                if (s == '1')
//                {
//                    b++;
//                }
//                else
//                {
//                    a++;
//                }
//            }
//
//            for (int j = m; j >= a; j--)
//            {
//                for (int k = n; k >= b; k--)
//                {
//
//                    dp[j][k] = max(dp[j][k], dp[j - a][k - b] + 1);
//
//
//                }
//            }
//        }
//        return dp[m][n];
//    }
//};