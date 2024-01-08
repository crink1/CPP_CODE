//class Solution {
//public:
//    int lenLongestFibSubseq(vector<int>& arr) {
//        int n = arr.size();
//        vector<vector<int>> dp(n, vector<int>(n, 2));
//        unordered_map<int, int> hash;
//        for (int i = 0; i < n; i++)
//        {
//            hash[arr[i]] = i;
//        }
//        int ret = 0;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                int tmp = arr[j] - arr[i];
//                if (tmp < arr[i])
//                {
//                    if (hash.count(tmp))
//                    {
//                        dp[i][j] = dp[hash[tmp]][i] + 1;
//                        ret = max(ret, dp[i][j]);
//                    }
//
//                }
//            }
//        }
//        return ret < 3 ? 0 : ret;
//    }
//};