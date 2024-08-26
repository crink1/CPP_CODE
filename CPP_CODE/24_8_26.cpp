//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#define int long long
//using namespace std;
//
//signed main() {
//    int n, l, r;
//    cin >> n >> l >> r;
//    vector<int> v(n);
//    for (auto& i : v)
//    {
//        cin >> i;
//    }
//    sort(v.begin(), v.end());
//    int ret = 0;
//    int left = 0;
//    int right = 1;
//    for (int i = 0; i < n; i++)
//    {
//        while (left < n && v[left] - v[i] < l)
//        {
//            left++;
//        }
//        while (right < n && v[right] - v[i] <= r)
//        {
//            right++;
//        }
//        ret += right - left;
//    }
//    cout << ret;
//
//}
//// 64 位输出请用 printf("%lld")

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    double dp[3001][3001];
//    dp[0][0] = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        dp[i][0] = dp[i - 1][0] * 0.2;
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            dp[i][j] = (dp[i - 1][j] * 0.2 + dp[i - 1][j - 1] * 0.8);
//        }
//    }
//    printf("%.4lf", dp[n][m]);
//
//}
//// 64 位输出请用 printf("%lld")