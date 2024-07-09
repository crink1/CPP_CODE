//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//
//
//    string s1, s2;
//    cin >> s1 >> s2;
//    vector<string> v(n);
//    int str1 = -1;
//    int str2 = -1;
//    int ret = INT_MAX;
//
//    for (int i = 0; i < v.size(); i++)
//    {
//        cin >> v[i];
//        if (v[i] == s1)
//        {
//            str1 = i;
//
//        }
//        if (v[i] == s2)
//        {
//            str2 = i;
//        }
//        if (str1 != -1 && str2 != -1)
//        {
//            ret = min(ret, abs(str1 - str2));
//        }
//
//    }
//
//    if (str1 == -1 || str2 == -1)
//    {
//        cout << -1;
//    }
//    else {
//        cout << ret;
//
//    }
//
//
//
//
//
//}
//// 64 位输出请用 printf("%lld")
//
//
//
//
//#include <cmath>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> dp(n);
//    vector<int> cost(n);
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> cost[i];
//    }
//    if (n == 1)
//    {
//        cout << cost[0];
//    }
//    else if (n == 2)
//    {
//        cout << min(cost[0], cost[1]);
//    }
//    dp[n - 1] = cost[n - 1];
//    dp[n - 2] = cost[n - 2];
//    for (int i = n - 3; i >= 0; i--)
//    {
//        dp[i] = min(dp[i + 1] + cost[i], dp[i + 2] + cost[i]);
//    }
//
//    cout << min(dp[0], dp[1]);
//
//}
//// 64 位输出请用 printf("%lld")
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    double m = 0.0;
//    char c = 'a';
//    cin >> m >> c;
//    int ret = 20;
//
//
//
//    if (m >= 1.0)
//    {
//        int x = m - 1;
//        if (m - 1 - x > 0)
//        {
//            x += 1;
//        }
//        ret += x;
//    }
//
//    if (c == 'y')
//    {
//        ret += 5;
//    }
//    cout << ret;
//
//
//}
//// 64 位输出请用 printf("%lld")