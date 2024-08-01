//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int V = 0;
//    int n = 0;
//    cin >> V >> n;
//    vector<int> v(n + 1);
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> v[i];
//    }
//
//    vector<int> dp(V + 1);
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = V; j >= v[i]; j--)
//        {
//
//
//            dp[j] = max(dp[j], dp[j - v[i]] + v[i]);
//
//        }
//    }
//    cout << V - dp[V];
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//
//    vector<int> v(n);
//    int maxi = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//        maxi = max(v[i], maxi);
//    }
//
//    int cnt = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (maxi % v[i] == 0)
//        {
//            int tmp = maxi / v[i];
//            if (0 == (tmp & (tmp - 1)))
//            {
//                cnt++;
//            }
//        }
//
//    }
//
//    if (cnt == n)
//    {
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//
//
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <unordered_map>
//#include <cmath>
//using namespace std;
//
//int main() {
//    string s1, s2;
//    cin >> s1 >> s2;
//    int m = s1.size();
//    int n = s2.size();
//    int ret = m;
//
//    for (int left = 0; left <= n - m; left++)
//    {
//        int cnt = 0;
//        int right = left + m - 1;
//
//
//        for (int i = left; i <= right; i++)
//        {
//            cnt += s1[i - left] != s2[i];
//        }
//        ret = min(cnt, ret);
//    }
//    cout << ret;
//    return 0;
//
//
//}
//// 64 位输出请用 printf("%lld")