//#include <climits>
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param A int����vector
//     * @param n int����
//     * @return int����
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