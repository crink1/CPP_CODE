//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<int> dp(n + 1);
//    for (int i = 1; i <= n; i++)
//    {
//        dp[i] = i;
//    }
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        for (int j = 0; j <= n - i * i; j++)
//        {
//            dp[j + i * i] = min(dp[j + i * i], dp[j] + 1);
//        }
//    }
//    cout << dp[n];
//
//}
//// 64 位输出请用 printf("%lld")
//
//#include <functional>
//#include <iostream>
//#include <queue>
//#include <unordered_map>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//    unordered_map<char, int> hash;
//    for (auto& i : s)
//    {
//        hash[i]++;
//    }
//
//    priority_queue<int, vector<int>, greater<int>> q;
//    for (auto& i : hash)
//    {
//        q.push(i.second);
//    }
//
//    int ret = 0;
//    while (q.size() > 1)
//    {
//        int x = q.top();
//        q.pop();
//        int y = q.top();
//        q.pop();
//        ret += x + y;
//        q.push(x + y);
//    }
//    cout << ret;
//}
//// 64 位输出请用 printf("%lld")
//
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main() {
//    string s;
//    unordered_map<char, int> hash;
//    pair<char, int> ret = { 'a', 0 };
//    while (cin >> s)
//    {
//        for (auto& i : s)
//        {
//            hash[i]++;
//
//        }
//    }
//
//    for (auto& i : hash)
//    {
//        if (i.second > ret.second)
//        {
//            ret.first = i.first;
//            ret.second = i.second;
//        }
//    }
//    cout << ret.first;
//
//}
//// 64 位输出请用 printf("%lld")