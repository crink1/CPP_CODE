//#include <iostream>
//#include <string.h>
//using namespace std;
//const int N = 1001;
//int n = 0, V = 0;
//int v[N], w[N];
//int dp[N][N];
//int main()
//{
//
//    cin >> n >> V;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> v[i] >> w[i];
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= V; j++)
//        {
//            dp[i][j] = dp[i - 1][j];
//            if (j >= v[i])
//            {
//                dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//            }
//        }
//    }
//    cout << dp[n][V] << endl;
//
//    memset(dp, 0, sizeof(dp));
//    for (int j = 1; j <= V; j++)
//    {
//        dp[0][j] = -1;
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= V; j++)
//        {
//            dp[i][j] = dp[i - 1][j];
//            if (j >= v[i] && dp[i - 1][j - v[i]] != -1)
//            {
//                dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//            }
//        }
//    }
//    cout << (dp[n][V] == -1 ? 0 : dp[n][V]) << endl;
//
//
//    return 0;
//}