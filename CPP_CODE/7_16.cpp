//#include <cstdio>
//#include <iostream>
//#include <string>
//#include "vector"
//using namespace std;
//
//int main() {
//    int m = 0, n = 0;
//    cin >> m >> n;
//    getchar();
//    vector<vector<char>> vv(m + 1, vector<char>(n + 1));
//    for (int i = 1; i <= m; i++)
//    {
//        string s;
//        getline(cin, s);
//
//        for (int j = 1; j <= n; j++)
//        {
//            vv[i][j] = s[j - 1];
//        }
//    }
//
//    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//
//    for (int i = 1; i <= m; i++)
//    {
//
//        for (int j = 1; j <= n; j++)
//        {
//            int point = 0;
//            if (vv[i][j] == 'l')
//            {
//                point = 4;
//            }
//            else if (vv[i][j] == 'o')
//            {
//                point = 3;
//            }
//            else if (vv[i][j] == 'v')
//            {
//                point = 2;
//            }
//            else if (vv[i][j] == 'e')
//            {
//                point = 1;
//            }
//
//            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + point;
//        }
//    }
//    cout << dp[m][n];
//
//
//
//}
//// 64 位输出请用 printf("%lld")
//
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * max increasing subsequence
//     * @param arr int整型vector the array
//     * @return int整型
//     */
//    int MLS(vector<int>& arr) {
//        if (arr.empty())
//        {
//            return 0;
//
//        }
//        // write code here
//        sort(arr.begin(), arr.end());
//        int ret = 1;
//        int len = 1;
//        for (int i = 1; i < arr.size(); i++)
//        {
//            if (arr[i] - 1 == arr[i - 1])
//            {
//                len++;
//                ret = max(ret, len);
//            }
//            else if (arr[i] == arr[i - 1])
//            {
//
//            }
//            else
//            {
//                len = 1;
//            }
//        }
//        return ret;
//    }
//};
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    long long a = 0;
//    long long b = 0;
//    cin >> a >> b;
//    for (long long i = a; i <= a * b; i += a)
//    {
//        if (i % a == 0 && i % b == 0)
//        {
//            cout << i << endl;
//            break;
//        }
//    }
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")