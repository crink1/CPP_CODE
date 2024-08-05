//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int n = 0;
//    int p = 0;
//    cin >> n >> p;
//    vector<int> v(n);
//    for (auto& i : v)
//    {
//        cin >> i;
//    }
//    int ret = 0;
//    sort(v.begin(), v.end());
//    for (int left = 0, right = 0; right < n; right++)
//    {
//        while (left <= right && v[right] - v[left] > 2 * p)
//        {
//            left++;
//        }
//        ret = max(ret, right - left + 1);
//
//
//
//    }
//    cout << ret << endl;
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
//    cin >> n;
//    vector<int> v(n);
//    vector<int> dp(n, 0);
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//    }
//
//
//    dp[0] = v[0];
//    dp[1] = max(v[0], v[1]);
//
//    for (int i = 2; i < n; i++)
//    {
//        dp[i] = max(dp[i - 1], dp[i - 2] + v[i]);
//    }
//
//    cout << dp[n - 1];
//
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
//    string s;
//    cin >> s;
//    if (s[0] == s[1])
//    {
//        cout << 2 << endl;
//        return 0;
//    }
//
//    int ret = -1;
//
//    int n = s.size();
//
//    if (n >= 3)
//    {
//        for (int i = 2; i < n; i++)
//        {
//            if (s[i] == s[i - 1])
//            {
//                cout << 2 << endl;
//                return 0;
//            }
//            if (s[i] == s[i - 2])
//            {
//                ret = 3;
//
//            }
//        }
//    }
//    cout << ret << endl;
//    return 0;
//}
//// 64 位输出请用 printf("%lld")