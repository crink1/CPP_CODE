//#include <iostream>
//using namespace std;
//
//bool ishw(string& s)
//{
//    int left = 0;
//    int right = s.size() - 1;
//    while (left < right)
//    {
//        if (s[left++] != s[right--])
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//bool sam(string& s)
//{
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] != s[0])
//        {
//            return false;
//        }
//
//    }
//    return true;
//}
//
//int main() {
//    string s;
//    cin >> s;
//
//    if (sam(s))
//    {
//        cout << 0;
//    }
//    else if (ishw(s))
//    {
//        cout << s.size() - 1 << endl;
//    }
//    else
//    {
//        cout << s.size() << endl;
//    }
//
//
//    return 0;
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//signed main() {
//    int n = 0;
//    cin >> n;
//    int t = 0;
//    vector<int> dp(n + 1);
//    vector<int> v(n);
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//    }
//
//    dp[1] = v[0];
//    int ret = dp[1];
//    for (int i = 2; i <= n; i++)
//    {
//        dp[i] = max(dp[i - 1] + v[i - 1], v[i - 1]);
//        ret = max(ret, dp[i]);
//    }
//    cout << ret;
//    return 0;
//
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    long long a, h, b, k;
//    cin >> a >> h >> b >> k;
//    long long cnt = 0;
//    while (h > 0 && k > 0)
//    {
//        cnt += b;
//        cnt += a;
//        h -= b;
//        k -= a;
//    }
//
//    if (h > 0)
//    {
//        cnt += a * 10;
//    }
//    else if (k > 0)
//    {
//        cnt += b * 10;
//    }
//
//    cout << cnt << endl;
//}
//// 64 位输出请用 printf("%lld")