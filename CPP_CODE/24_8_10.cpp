//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//int main() {
//    int n = 0;
//    int m = 0;
//    cin >> n >> m;
//    string s1, s2;
//    cin >> s1 >> s2;
//    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            if (s1[i - 1] == s2[j - 1])
//            {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//            }
//            else {
//                dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
//            }
//        }
//    }
//    cout << dp[n][m];
//    return 0;
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    vector<int> v(n);
//    for (auto& i : v)
//    {
//        cin >> i;
//    }
//
//    sort(v.begin(), v.end());
//
//    int l = 0;
//    int r = 0;
//    int ret = 0;
//    while (r < v.size())
//    {
//        if (v[r] - v[l] > k)
//        {
//            ret = max(ret, r - l);
//            l++;
//            continue;
//        }
//        r++;
//    }
//    ret = max(ret, r - l);
//    cout << ret;
//    return 0;
//
//}
//// 64 位输出请用 printf("%lld")
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//bool isp(long long x)
//{
//    if (x == 1)
//    {
//        return true;
//    }
//    for (long long i = 2; i <= x / i; i++)
//    {
//        if (x % i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    long long n = 0;
//    cin >> n;
//    while (n--)
//    {
//        long long a = 0;
//        long long b = 0;
//        cin >> a >> b;
//        if (a == 1 || b == 1)
//        {
//            if (isp(max(a, b)))
//            {
//                cout << "YES" << endl;
//            }
//            else {
//                cout << "NO" << endl;
//            }
//
//        }
//        else {
//            cout << "NO" << endl;
//        }
//    }
//    return 0;
//
//}
//// 64 位输出请用 printf("%lld")