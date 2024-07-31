//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    vector<vector<int>> dp(s.size(), vector<int>(s.size()));
//
//    for (int i = s.size() - 1; i >= 0; i--)
//    {
//        dp[i][i] = 1;
//        for (int j = i + 1; j < s.size(); j++)
//        {
//            if (s[i] == s[j])
//            {
//                dp[i][j] = dp[i + 1][j - 1] + 2;
//            }
//            else
//            {
//                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
//            }
//        }
//    }
//    cout << dp[0][s.size() - 1];
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int m = 0;
//    int n = 0;
//
//    cin >> m >> n;
//    vector<int> a(m);
//    vector<int> b(n);
//    vector<int> ret(m + n);
//
//    for (int i = 0; i < m; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cin >> b[i];
//    }
//
//    int l1 = 0;
//    int l2 = 0;
//    int i = 0;
//    while (l1 < m && l2 < n)
//    {
//        if (a[l1] < b[l2])
//        {
//            if (ret.empty() || ret.back() != a[l1])
//            {
//                ret[i++] = a[l1];
//            }
//            l1++;
//        }
//        else if (a[l1] == b[l2])
//        {
//            if (ret.empty() || ret.back() != a[l1])
//            {
//                ret[i++] = a[l1];
//            }
//            l1++;
//            l2++;
//        }
//        else if (a[l1] > b[l2])
//        {
//            if (ret.empty() || ret.back() != b[l2])
//            {
//                ret[i++] = b[l2];
//            }
//            l2++;
//        }
//    }
//
//
//    while (l1 < m)
//    {
//        if (ret.empty() || ret.back() != a[l1])
//        {
//            ret[i++] = a[l1];
//        }
//        l1++;
//    }
//
//
//    while (l2 < n)
//    {
//        if (ret.empty() || ret.back() != b[l2])
//        {
//            ret[i++] = b[l2];
//        }
//        l2++;
//    }
//
//
//    for (auto& k : ret)
//    {
//        if (k == 0)
//        {
//            break;
//        }
//        cout << k << " ";
//    }
//
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    int cnt = 1;
//    int ret[100001] = { 0 };
//    for (int i = 1; i < n; i += 2)
//    {
//        ret[i] = cnt++;
//    }
//    for (int i = 0; i < n; i += 2)
//    {
//        ret[i] = cnt++;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cout << ret[i] << " ";
//    }
//    return 0;
//}
