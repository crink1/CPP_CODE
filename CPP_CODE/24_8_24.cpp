//#include <climits>
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param A int整型vector
//     * @param n int整型
//     * @return int整型
//     */
//    int getDis(vector<int>& A, int n) {
//        // write code here
//        int ret = 0;
//        vector<int> dp(n + 1);
//        int min_num = INT_MAX;
//        dp[0] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            min_num = min(min_num, A[i - 1]);
//            dp[i] = max(dp[i - 1], A[i - 1] - min_num);
//
//        }
//        return dp[n];
//    }
//};