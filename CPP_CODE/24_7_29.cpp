//#include <cstring>
//#include <iostream>
//#include <vector>
//using namespace std;
//int chash[26] = { 0 };
//
//bool cmp(string& a, string& b)
//{
//    memset(chash, 0, sizeof(chash));
//    for (auto& i : a)
//    {
//        chash[i - 'a']++;
//    }
//    for (auto& i : b)
//    {
//        if (chash[i - 'a'] > 0)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//void sol()
//{
//    int n = 0;
//    cin >> n;
//    vector<string> vs(n);
//    for (auto& i : vs)
//    {
//        cin >> i;
//    }
//
//    int left = 0;
//    int right = vs.size() - 1;
//    while (left <= right)
//    {
//        if (!cmp(vs[left], vs[right]))
//        {
//            cout << "No" << endl;
//            return;
//        }
//        left++;
//        right--;
//    }
//    cout << "Yes" << endl;
//    return;
//}
//
//int main() {
//
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        sol();
//    }
//}
//// 64 位输出请用 printf("%lld")
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param grid int整型vector<vector<>>
//     * @return int整型
//     */
//    int maxValue(vector<vector<int> >& grid) {
//        // write code here
//        int m = grid.size();
//        int n = grid[0].size();
//        vector<vector<int> > dp(m + 1, vector<int>(n + 1));
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + grid[i - 1][j - 1];
//            }
//        }
//        return dp[m][n];
//    }
//};
//
//#include <iostream>
//#include <vector>
//#define int long long
//using namespace std;
//
//int gcd(int x, int y)
//{
//    int tmp = x % y;
//    while (x % y)
//    {
//        tmp = x % y;
//        x = y;
//        y = tmp;
//    }
//    return tmp;
//
//}
//
//
//signed main() {
//    int n = 0;
//    int x = 0;
//    cin >> n >> x;
//    int t = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> t;
//        if (x >= t)
//        {
//            x += t;
//        }
//        else
//        {
//            x += gcd(x, t);
//        }
//
//    }
//    cout << x << endl;
//    return 0;
//
//
//}
//// 64 位输出请用 printf("%lld")