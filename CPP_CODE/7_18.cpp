//#include <iostream>
//#include <vector>
//#define int long long
//using namespace std;
//
//// ���̴�С
//const int MAX_SIZE = 21;
//
//// �����Ծ���Ƶ���������
//const int horse_moves[9][2] = {
//    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
//    {1, 2}, {1, -2}, {-1, 2}, {-1, -2},
//    {0, 0} // ���λ�ñ���
//};
//
//// ����Ƿ���������
//bool isValid(int x, int y, int n, int m) {
//    return x >= 0 && x <= n && y >= 0 && y <= m;
//}
//
//int calculatePaths(int n, int m, int x, int y) {
//    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//
//    // �����Ŀ��Ƶ�
//    vector<vector<bool>> isControlled(n + 1, vector<bool>(m + 1, false));
//    for (int i = 0; i < 9; ++i) {
//        int hx = x + horse_moves[i][0];
//        int hy = y + horse_moves[i][1];
//        if (isValid(hx, hy, n, m)) {
//            isControlled[hx][hy] = true;
//        }
//    }
//
//    dp[0][0] = 1; // ���
//
//    for (int i = 0; i <= n; ++i) {
//        for (int j = 0; j <= m; ++j) {
//            if (isControlled[i][j]) {
//                dp[i][j] = 0;
//            }
//            else {
//                if (i > 0) dp[i][j] += dp[i - 1][j];
//                if (j > 0) dp[i][j] += dp[i][j - 1];
//            }
//        }
//    }
//
//    return dp[n][m];
//}
//
//signed main() {
//    int n, m, x, y;
//    cin >> n >> m >> x >> y;
//
//    cout << calculatePaths(n, m, x, y) << endl;
//
//    return 0;
//}
//
//
//#include <iostream>
//#include <climits>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> v(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//    }
//
//    int ret = 0;
//
//    int pmin = INT_MAX;
//
//
//    for (int i = 0; i < n; i++)
//    {
//        ret = max(ret, v[i] - pmin);
//        if (v[i] < pmin)
//        {
//            pmin = v[i];
//        }
//    }
//    cout << ret;
//
//}
//// 64 λ������� printf("%lld")
//
//#include <vector>
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     *
//     * @param A string�ַ���
//     * @return int����
//     */
//    int getLongestPalindrome(string A) {
//        // write code here
//
//        int n = A.size();
//        vector<vector<bool>> dp(n, vector<bool>(n, false));
//        int mlen = 0;
//
//        for (int i = n - 1; i >= 0; i--) {
//            for (int j = i; j < n; j++) {
//                if (A[i] == A[j]) {
//                    if (i + 1 < j) {
//                        dp[i][j] = dp[i + 1][j - 1];
//                    }
//                    else {
//                        dp[i][j] = true;
//                    }
//                }
//
//
//                if (dp[i][j] == true && j - i + 1 > mlen) {
//                    mlen = j - i + 1;
//                }
//            }
//        }
//        return mlen;
//
//    }
//};