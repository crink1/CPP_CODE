//#include <iostream>
//using namespace std;
//#define int long long
//string s;
//int n, l, r;
//
//int find(int x)
//{
//    if (0 == x)
//    {
//        return 0;
//    }
//    int left = 0;
//    int right = 0;
//    int hash[26] = { 0 };
//    int cnt = 0;
//    int ret = 0;
//    while (right < n)
//    {
//        if (0 == hash[s[right] - 'a']++)
//        {
//            cnt++;
//        }
//        while (cnt > x)
//        {
//            if (hash[s[left] - 'a']-- == 1)
//            {
//                cnt--;
//            }
//            left++;
//        }
//        ret += right - left + 1;
//        right++;
//    }
//    return ret;
//}
//
//signed main() {
//    cin >> n >> l >> r;
//    cin >> s;
//    cout << find(r) - find(l - 1) << endl;
//}
//// 64 Î»Êä³öÇëÓÃ printf("%lld")
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n = 0;
//    int aim = 0;
//    cin >> n >> aim;
//
//    vector<int> v(n + 1);
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> v[i];
//    }
//
//    vector<int> dp(aim + 1, aim + 1);
//    dp[0] = 0;
//
//
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = v[i]; j <= aim; j++)
//        {
//
//            dp[j] = min(dp[j], dp[j - v[i]] + 1);
//
//
//        }
//    }
//    if (dp[aim] == aim + 1)
//    {
//        cout << -1;
//    }
//    else {
//        cout << dp[aim] << endl;
//    }
//
//
//}
