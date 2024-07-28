//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 计算01背包问题的结果
//     * @param V int整型 背包的体积
//     * @param n int整型 物品的个数
//     * @param vw int整型vector<vector<>> 第一维度为n,第二维度为2的二维数组,vw[i][0],vw[i][1]分别描述i+1个物品的vi,wi
//     * @return int整型
//     */
//    int knapsack(int V, int n, vector<vector<int> >& vw) {
//        // write code here
//        vector<int> dp(V + 1);
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = V; j >= vw[i - 1][0]; j--)
//            {
//                dp[j] = max(dp[j], dp[j - vw[i - 1][0]] + vw[i - 1][1]);
//            }
//        }
//        return dp[V];
//
//
//
//    }
//};
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define int long long
//using namespace std;
//
//struct orange
//{
//    int s;
//    int a;
//};
//
//signed main() {
//    int n = 0, k = 0;
//    cin >> n >> k;
//
//    vector<orange> v(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i].a;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i].s;
//    }
//    sort(v.begin(), v.end(), [](struct orange x, struct orange y) {
//        if (x.s == y.s)
//        {
//            return x.a < y.a;
//        }
//        return x.s > y.s;
//        });
//
//    int reta = 0;
//    int rets = 0;
//    for (int i = 0; i < k; i++)
//    {
//        reta += v[i].a;
//        rets += v[i].s;
//    }
//
//    cout << reta << " " << rets << endl;
//
//
//}
//// 64 位输出请用 printf("%lld")
//#include <string>
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param param string字符串
//     * @return string字符串
//     */
//    string compressString(string param) {
//        // write code here
//        string ret;
//        int cnt = 1;
//        ret += param[0];
//        for (int i = 1; i < param.size(); i++)
//        {
//            if (param[i] == ret[ret.size() - 1])
//            {
//                cnt++;
//                if (i == param.size() - 1)
//                {
//                    ret += to_string(cnt);
//                }
//            }
//            else
//            {
//
//                if (cnt > 1)
//                {
//                    ret += to_string(cnt);
//                }
//                ret += param[i];
//
//                cnt = 1;
//
//            }
//        }
//
//        return ret;
//    }
//};