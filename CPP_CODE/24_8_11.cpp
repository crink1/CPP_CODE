//#include <iostream>
//#include <vector>
//#define int long long
//using namespace std;
//
//signed main() {
//    int x = 0;
//    cin >> x;
//    vector<int> v;
//    int sum = 0;
//    while (x)
//    {
//        int t = x % 10;
//        sum += t;
//        v.push_back(t);
//        x /= 10;
//    }
//    if (sum % 2 != 0)
//    {
//        cout << "No";
//    }
//    else
//    {
//        sum /= 2;
//        vector<bool> dp(sum + 1, false);
//        dp[0] = true;
//        for (int i = 0; i < v.size(); i++)
//        {
//            for (int j = sum; j >= v[i]; j--)
//            {
//
//                if (dp[j - v[i]])
//                {
//                    dp[j] = dp[j - v[i]];
//                }
//            }
//        }
//        cout << (dp[sum] ? "Yes" : "No");
//    }
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        long long  n, a, b;
//        cin >> n >> a >> b;
//        long long ret = 1e18;
//        ret = min(ret, (n + 1) / 2 * a);
//        if (n >= 3)
//        {
//            ret = min(ret, b + (n - 3 + 1) / 2 * a);
//        }
//        ret = min(ret, (n + 2) / 3 * b);
//        if (n >= 2)
//        {
//            ret = min(ret, a + (n - 2 + 2) / 3 * b);
//        }
//        if (n >= 4)
//        {
//            ret = min(ret, a * 2 + (n - 4 + 2) / 3 * b);
//        }
//        cout << ret << endl;
//
//
//    }
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    priority_queue<int, vector<int>, greater<int>> q;
//    for (int i = 0; i < n; i++)
//    {
//        int t = 0;
//        cin >> t;
//
//        q.push(t);
//    }
//    int ret = 0;
//    int sum = 0;
//    while (sum <= k)
//    {
//        int t = q.top();
//
//        q.pop();
//        sum += t;
//        q.push(t * 2);
//        ret++;
//    }
//    cout << ret - 1;
//
//
//}
//// 64 位输出请用 printf("%lld")