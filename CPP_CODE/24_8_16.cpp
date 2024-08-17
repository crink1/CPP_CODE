//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    string s1, s2;
//    cin >> s1 >> s2;
//    int m = s1.size();
//    int n = s2.size();
//    vector<int> dp(n + 1, 0);
//    //初始化
//    for (int j = 0; j <= n; j++)
//    {
//        dp[j] = j;
//    }
//
//    int prej, preij;
//    for (int i = 1; i <= m; i++)
//    {
//        dp[0] = i;
//        preij = dp[0] - 1;
//
//        for (int j = 1; j <= n; j++)
//        {
//            prej = dp[j];
//            dp[j] = min(dp[j] + 1, min(dp[j - 1] + 1, ((s1[i - 1] == s2[j - 1]) ? 0 : 1) + preij));
//            preij = prej;
//        }
//    }
//    cout << dp[n];
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//void dfs(int cnt, vector<int>& v, int m, int n)
//{
//    if (m == 0)
//    {
//        for (int i = 0; i < v.size(); i++)
//        {
//            i == 0 ? cout << v[i] : cout << " " << v[i];
//        }
//        cout << endl;
//    }
//
//    for (int i = cnt; i <= n && i <= m; i++)
//    {
//        v.push_back(i);
//        dfs(i + 1, v, m - i, n);
//        v.pop_back();
//    }
//
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<int> v;
//    dfs(1, v, m, n);
//
//    return 0;
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    while (cin >> n) {
//
//        vector<int> v(n + 1);
//        for (int i = 0; i <= n; i++) {
//            v[i] = i;
//        }
//
//        vector<int> ret;
//        while (true) {
//            for (int i = 0; i < v.size(); i++) {
//                if (i % 2 == 1) {
//                    ret.push_back(v[i]);
//                }
//            }
//            if (v.size() == 1) {
//                break;
//            }
//            v = ret;
//            ret.clear();
//        }
//        cout << ret[0] << endl;
//    }
//
//}
//// 64 位输出请用 printf("%lld")